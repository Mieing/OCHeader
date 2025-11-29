@class NSMapTable;

@interface IESECObjectRepository : NSObject {
    NSMapTable *_objectMap;
}

+ (id)sharedRepository;

- (void)removeObjectForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForIdentifier:(id)a0;
- (id)saveObject:(id)a0;

@end
