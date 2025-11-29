@class NSMutableDictionary, NSDictionary, NSObject, BDCommonABTestExperimentUpdater;
@protocol OS_dispatch_queue, BDCommonABTestLogDelegate;

@interface BDCommonABTestManager : NSObject {
    NSObject<OS_dispatch_queue> *asyncQueue;
}

@property (weak, nonatomic) id<BDCommonABTestLogDelegate> logDelegate;
@property (retain, nonatomic) BDCommonABTestExperimentUpdater *updater;
@property (retain, nonatomic) NSMutableDictionary *experiments;
@property (retain) NSDictionary *fetchResults;
@property (retain) NSDictionary *editResults;

+ (id)getExperimentValueForKey:(id)a0 withExposure:(BOOL)a1;
+ (void)registerExperiment:(id)a0;
+ (BOOL)registerClientLayer:(id)a0;
+ (void)registerLogDelegate:(id)a0;
+ (void)unregisterLogDelegate;
+ (id)getExperimentVidForKey:(id)a0;
+ (id)userDelegate;
+ (void)setUserDelegate:(id)a0;
+ (id)getClientExperimentInfo;
+ (void)enableExposureEvent:(BOOL)a0;
+ (void)enableValidVidPerf:(BOOL)a0;
+ (id)queryExposureExperimentsForUserKey:(id)a0;
+ (id)queryExposureExperiments;
+ (void)fetchExperimentsDataForSDKWithURL:(id)a0 params:(id)a1 headers:(id)a2 maxRetryCount:(long long)a3 completionBlock:(id /* block */)a4;
+ (id)getExtraParameter;
+ (void)handleResponse:(id)a0 completionBlock:(id /* block */)a1;
+ (void)fetchExperimentDataWithURL:(id)a0 params:(id)a1 headers:(id)a2 maxRetryCount:(long long)a3 completionBlock:(id /* block */)a4;
+ (void)launchClientExperimentManager;
+ (void)saveServerSettingsForClientExperiments:(id)a0;
+ (void)addExtraParameter:(id)a0;
+ (void)ABTestSDKInit;
+ (void)p_fetchExperimentDataWithURL:(id)a0 params:(id)a1 headers:(id)a2 maxRetryCount:(long long)a3 completionBlock:(id /* block */)a4;
+ (void)fetchExperimentDataWithURL:(id)a0 params:(id)a1 headers:(id)a2 currentRetryCount:(long long)a3 maxRetryCount:(long long)a4 completionBlock:(id /* block */)a5;
+ (id)clientLayerByName:(id)a0;
+ (id)allRegisteredExperiments;
+ (void)fetchExperimentDataWithURL:(id)a0 params:(id)a1 maxRetryCount:(long long)a2 completionBlock:(id /* block */)a3;
+ (void)saveServerSettingsForServerExperiments:(id)a0;
+ (void)configMaxExposureOfflineStorageTimeInterval:(long long)a0;
+ (void)debugWithExperimentKey:(id)a0 completion:(id /* block */)a1;
+ (id)sharedManager;

- (void)doLog:(id)a0;
- (void)editExperimentWithKey:(id)a0 value:(id)a1 vid:(id)a2;
- (id)validVids;
- (id)savedItemForKey:(id)a0;
- (void)editTmpExperimentWithKey:(id)a0 value:(id)a1 vid:(id)a2;
- (id)legacy_validVids;
- (void)savefetchedABTestingDictionary:(id)a0;
- (void)updateValidVids;
- (id)editedABTestingDictionary;
- (void)saveEditedABTestingDictionary:(id)a0;
- (id)getExperimentForKey:(id)a0;
- (void)saveEditedABTestingDictionaryTmp:(id)a0;
- (id)fetchedABTestingDictionary;
- (void)saveFetchedJsonData:(id)a0;
- (id)editedItemForKey:(id)a0;
- (id)libraDirectory;
- (void).cxx_destruct;
- (id)init;
- (void)loadResults;

@end
