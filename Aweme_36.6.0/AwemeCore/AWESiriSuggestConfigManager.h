@class NSArray, NSMutableDictionary, MMKV, HMDThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWESiriSuggestConfigManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *helperQueue;
@property (retain, nonatomic) NSMutableDictionary *retryCountDic;
@property (nonatomic) long long adviceRetryCount;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
@property (copy, nonatomic) NSArray *todaySiriConfig;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) HMDThreadSafeDictionary *batchedCachedModelDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *configUpdateQueue;

+ (id)sharedInstance;

- (void)reportSiriSuggestionClicked:(id)a0 sceneType:(id)a1 scheme:(id)a2;
- (id)processSiriConfigUsingV3Response:(id)a0 rawData:(id)a1;
- (void)requestSiriConfigModelFromPushServiceWithType:(id)a0 completion:(id /* block */)a1 extra:(id)a2;
- (id)getSiriConfigModelWithTypeFromCache:(id)a0;
- (BOOL)isNotExpired:(id)a0;
- (void)requestSiriSuggestModelsWithSceneType:(id)a0 useV3:(BOOL)a1 requestScene:(unsigned long long)a2 timingType:(unsigned long long)a3 extra:(id)a4 completion:(id /* block */)a5;
- (id)getOptimizedSiriConfigModelWithType:(id)a0;
- (id)getLegacySiriConfigModel:(id)a0;
- (id)getValidBatchSiriConfigModelFromCache:(id)a0;
- (id)getValidModelAndMarkDonated:(id)a0 validModels:(id)a1;
- (void)updateBatchedCachedModelConfig:(id)a0;
- (id)setupRequestMode:(id)a0 useV3:(BOOL)a1;
- (void)requestSiriConfigThruV3WithSceneType:(id)a0 requestScene:(unsigned long long)a1 timingType:(unsigned long long)a2 requestMode:(id)a3 completion:(id /* block */)a4;
- (BOOL)enableSiriRetrySwtich;
- (id)groupedOldStructDictBySceneType:(id)a0 rawData:(id)a1;
- (void)getSiriConfigModelWithType:(id)a0 usingV3:(BOOL)a1 requestScene:(unsigned long long)a2 timingType:(unsigned long long)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillTerminate;
- (void)dealloc;

@end
