@class NSDictionary, MMKV, NSObject;
@protocol OS_dispatch_queue;

@interface AWESiriTopHitChannelDataService : NSObject {
    NSDictionary *_channelCandidatePool;
}

@property (retain, nonatomic) NSDictionary *channelCandidatePool;
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) NSDictionary *businessDataSourceMap;
@property (nonatomic) BOOL enableSyncFix;

+ (id)sharedInstance;

- (void)removeCandidate:(id)a0 forDataSource:(long long)a1;
- (void)saveToCache:(id)a0;
- (void)addChannelData:(id)a0 forDataSource:(long long)a1;
- (id)convertDataModelFromRawData:(long long)a0;
- (long long)getTopHitDataSource:(id)a0;
- (id)getFinalAppIntentConfigWithTopHitModel:(id)a0;
- (void)removeCandidate:(id)a0 forBusiness:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
