@class NSDictionary;
@protocol BUPersistenceProtocol;

@interface CSJSlotABManager : NSObject

@property (retain, nonatomic) id<BUPersistenceProtocol> persistence;
@property (copy) NSDictionary *extraDic;

+ (void)removeAllCache;
+ (id)sharedInstance;

- (id)getCacheModel:(long long)a0;
- (void)cacheExtraWithModel:(id)a0;
- (void)fetchSlotWithCodeGroupId:(long long)a0 completion:(id /* block */)a1;
- (id)dynamicSlotABExtraWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
