@class NSString, FMDatabaseQueue;

@interface CKResourceEffectCache : NSObject <CKResourceCacheProtocol> {
    FMDatabaseQueue *ckDBQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandle:(id)a0;
- (BOOL)addOrUpdateCache:(id)a0;
- (id)queryCache:(id)a0;
- (BOOL)markCacheUsed:(id)a0;
- (id)queryAllCache;
- (BOOL)deleteCache:(id)a0;
- (id)ckDBQueue;
- (id)generateConditionMap:(id)a0;
- (void)setCkDBQueue:(id)a0;
- (void).cxx_destruct;

@end
