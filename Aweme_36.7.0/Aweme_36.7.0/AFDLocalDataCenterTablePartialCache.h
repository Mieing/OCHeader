@class NSCache, NSString;

@interface AFDLocalDataCenterTablePartialCache : NSObject <AFDLocalDataCenterTableCache>

@property (retain, nonatomic) NSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allModels;
- (void)removePrimaryID:(id)a0;
- (void)overwriteWithModels:(id)a0;
- (BOOL)containsPrimaryID:(id)a0;
- (id)modelForPrimaryID:(id)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapacity:(long long)a0;
- (void)removeAllObjects;

@end
