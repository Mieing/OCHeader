@class NSArray, MMKV, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUGDataCollectionManager : HTSService <AWEUGDataCollectionService>

@property (copy, nonatomic) NSArray *strategiesData;
@property (retain, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) NSArray *datas;
@property (copy, nonatomic) NSArray *businessData;
@property (retain, nonatomic) NSMutableArray *dataRequestBlock;
@property (retain, nonatomic) NSMutableArray *businessSettingsClassArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL enableSyncFix;
@property (nonatomic) BOOL isBusinessDataUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getUGBusinessDataWithCompletion:(id /* block */)a0;
- (void)getUGBusinessData:(id)a0 forceRequest:(BOOL)a1 disableUsingCache:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)requestUGSettingsData;
- (void)reportTriggeredStrategy:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestDistributionWithCompletion:(id /* block */)a0;
- (void)registerUndertakingSettingsClass:(Class)a0;
- (void)trackLogWithMessage:(id)a0;
- (void)notifyDataRequestCompleted;
- (void)getUGBusinessData:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestUGSettingsDataImmediately:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateNewInstallMark;
- (double)getLastRequestTime;
- (id)processRawStrategyConfigData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)getCurrentTime;

@end
