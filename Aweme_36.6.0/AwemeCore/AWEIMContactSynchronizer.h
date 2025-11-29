@class NSOperationQueue, NSString;
@protocol IESLCMessageHandlerProtocol, IESIMHttpTask, AWEIMContactSynchronizerDelegate;

@interface AWEIMContactSynchronizer : NSObject <AWEUserMessage, IESLCMessageHandlerService>

@property (nonatomic) double lastMaxTime;
@property (retain, nonatomic) NSOperationQueue *processQueue;
@property (retain, nonatomic) id<IESIMHttpTask> currentTask;
@property long long synchronyState;
@property (weak, nonatomic) id<AWEIMContactSynchronizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)applicationDidBecomeActiveNoti:(id)a0;
- (void)applicationWillResignActiveNoti:(id)a0;
- (void)setupSynchronizerWithContext:(id)a0;
- (void)p_configProcessQueue;
- (BOOL)p_loadWholeContactListWithContext:(id)a0;
- (long long)coldupUpdateInterval;
- (BOOL)p_beyondInterval:(long long)a0 source:(id)a1;
- (void)p_appendNewContactListWithEntrance:(id)a0 context:(id)a1;
- (long long)fontUpdateInterval;
- (void)p_handlerPushMessage;
- (long long)frontierUpdateInterval;
- (void)resetLastMaxTime;
- (void)resetLastSyncContactTime;
- (void)p_resetSynchronyState;
- (double)lastSyncContactTimestampWithSource:(id)a0;
- (long long)wholeLoadInterval;
- (BOOL)isAbnormalShareSortedNeedFetch:(id)a0;
- (void)p_prepareDownloadContactsWithParam:(id)a0 context:(id)a1;
- (void)p_trackDBInfoForParam:(id)a0 netStage:(float)a1 saveStage:(float)a2 count:(long long)a3 requestStatus:(int)a4 saveStatus:(int)a5;
- (BOOL)isAbnormalSorted;
- (void)storeAbnormalShareSortedFetchInfo:(BOOL)a0;
- (void)setIsAbnormalSorted:(BOOL)a0;
- (void)setIsAbnormalRecentShare:(BOOL)a0;
- (void)setLastSyncContactTimestamp:(double)a0 source:(id)a1;
- (void)p_updateRemoveSharePanelList:(id)a0 uid:(id)a1;
- (void)extractHotsoonHideTextWithDict:(id)a0;
- (id)p_downloadContactsWithParam:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)imContactUpdateFreqConfig;
- (id)p_shareSortAbnormalKey;
- (id)p_shareRecentShareAbnormalKey;
- (id)p_shareSortDateKey;
- (id)p_shareSortCountKey;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
