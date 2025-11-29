@class FMDatabaseQueue, NSString;

@interface CKResourceZipCache : NSObject <CKResourceCacheProtocol>

@property (weak, nonatomic) FMDatabaseQueue *ckDBQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeCKCacheInfoWithDictionary:(id)a0;
+ (id)tableName;

- (BOOL)canHandle:(id)a0;
- (BOOL)addOrUpdateCache:(id)a0;
- (id)queryCache:(id)a0;
- (BOOL)markCacheUsed:(id)a0;
- (id)queryAllCache;
- (BOOL)deleteCache:(id)a0;
- (id)generateConditionMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
