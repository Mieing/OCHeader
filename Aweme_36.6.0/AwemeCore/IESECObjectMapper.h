@class NSMutableDictionary;

@interface IESECObjectMapper : NSObject {
    NSMutableDictionary *_objectMappers;
    NSMutableDictionary *_mappedObjects;
}

- (void)registerMapper:(id /* block */)a0 withTargetClass:(Class)a1 forClass:(Class)a2;
- (id)mappedObjectWithTargetClass:(Class)a0 forObject:(id)a1;
- (void)removeMappedObjectForObject:(id)a0;
- (void)removeAllMappedObjects;
- (void).cxx_destruct;
- (id)init;

@end
