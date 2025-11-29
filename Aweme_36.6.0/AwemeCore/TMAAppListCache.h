@class NSRecursiveLock, NSArray, NSString, NSMutableArray;

@interface TMAAppListCache : NSObject <BDPBusinessUsageRecordProtocol> {
    NSRecursiveLock *_internalLock;
}

@property (retain, nonatomic) NSMutableArray *internalList;
@property (readonly, nonatomic) NSArray *list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)usageRecordWithParameters:(id)a0 update:(id /* block */)a1;
+ (void)removeUsageRecordApp:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (void)updateListCache:(id)a0;
- (id)usageRecordWithParameters:(id)a0 update:(id /* block */)a1;
- (void)removeUsageRecordApp:(id)a0 completion:(id /* block */)a1;
- (id)usageRecordWithUpdate:(id /* block */)a0;
- (void)loadLocalData:(id)a0;
- (void)reportUsageRecord:(id)a0;
- (id)getApplicationID;
- (void)replaceLocalData:(id)a0 uid:(id)a1;
- (void)deleteProgram:(id)a0 uid:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)initProperties;

@end
