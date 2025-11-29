@class NSString, NSHashTable, NSObject, IESIMDisabledAppealResponseModel;
@protocol OS_dispatch_queue, IESIMHttpTask;

@interface IESIMAppealBannerManager : NSObject <IESIMUserServiceMessage, IESIMAppealInfoManagerProtocol>

@property (nonatomic) BOOL abConfigEnable;
@property (nonatomic) long long timeFrequency;
@property (nonatomic) BOOL enableColdStartFetch;
@property (retain, nonatomic) id<IESIMHttpTask> requestTask;
@property (retain, nonatomic) NSHashTable *weakListener;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;
@property (retain, nonatomic) IESIMDisabledAppealResponseModel *currentModel;
@property (nonatomic) BOOL loadedLocalCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateCurrentModel:(id)a0;
- (void)getLocalCache:(id /* block */)a0;
- (id)currentAppealResponseModel;
- (BOOL)banIMActionWithConversation:(id)a0;
- (void)fetchAppealInfoIsColdLaunch:(BOOL)a0;
- (void)handleEnterForeground:(id)a0;
- (BOOL)abSwitch;
- (void)fetchAppealInfoWithContext:(id)a0 skipFreq:(BOOL)a1;
- (void)loadLastAppealCache:(id /* block */)a0;
- (id)lastRequestInfoKey;
- (id)exitListKey;
- (void)p_saveEmptyResponseModelForError;
- (void)notifyAllDelegatesWithResponseModel:(id)a0;
- (void)checkShouldShowBannerForAppealModel:(id)a0 completion:(id /* block */)a1;
- (void)markClosedTipForAppealModel:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
