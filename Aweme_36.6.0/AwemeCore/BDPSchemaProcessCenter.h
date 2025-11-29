@class NSMutableArray;

@interface BDPSchemaProcessCenter : NSObject

@property (retain, nonatomic) NSMutableArray *schemaProcessBlkArray;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;

+ (id)rebuildSchemaWithSchemaURL:(id)a0;
+ (void)addSchemaProcessBlk:(id /* block */)a0;
+ (void)addSchemaProcessBlk:(id /* block */)a0 atIndex:(unsigned long long)a1;
+ (void)removeAllObjects;
+ (id)allObjects;
+ (id)sharedCenter;

- (id)rebuildSchemaWithSchemaURL:(id)a0;
- (void)addSchemaProcessBlk:(id /* block */)a0;
- (void)addSchemaProcessBlk:(id /* block */)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;
- (id)allObjects;

@end
