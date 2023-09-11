# Rax

Files in this directory are copied from Redis <https://github.com/redis/redis>. CMakeLists.txt helps build a library
for rax out of these files.

See readme in <https://github.com/antirez/rax>

## Rax node structure

![](./raxNode%20structure.png)

## Insertion

`raxGenericInsert` is responsible for inserting a new string to the rax.

See also `raxAddChild`.

## Deletion

`raxRemoveChild`
`raxRemove`

## Lookup/find/search

Returns the aux data associated with the given key if found. If not found, a special value of `raxNotFound` (which
is not NULL) is returned.

```c
void *raxFind(rax *rax, unsigned char *s, size_t len)
```

## Iteration
