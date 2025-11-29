@class NSString, NSMutableDictionary;

@interface AWEFeedAutoUnlockRewardedAdvertisingController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTableViewCellControllerPlayerDelegate>

@property (retain, nonatomic) NSMutableDictionary *autoUnlockInfoForItemID;
@property (nonatomic, getter=isEnteredADContainer) BOOL enteredADContainer;
@property (nonatomic, getter=isAlreadyViewDidAppear) BOOL alreadyViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)applicationWillResignActiveNotification:(id)a0;
- (id)getInteractionContext;
- (id)getAutoUnlockInfoForCurrentModel;
- (void)sendEventAutoUnlockEvent:(long long)a0;
- (void)cancelAutoUnlockForCurrentModel:(BOOL)a0;
- (id)getAutoUnlockInfoForModel:(id)a0;
- (void)sendEventOpenIAARewardADContainer:(BOOL)a0 context:(id)a1 model:(id)a2;
- (void)didLongPressShowSharePanelNotification:(id)a0;
- (void)launchAutoUnlockEventFromPreviousVideoWithInfo:(id)a0 context:(id)a1;
- (void)launchAutoUnlockEventFromNoPreviewVideoWithInfo:(id)a0 context:(id)a1;
- (void)resetAutoUnlockForModel:(id)a0;
- (id)createAutoUnlockInfoWithModel:(id)a0;
- (void)launchAutoUnlockEventWithInfo:(id)a0;
- (void)launchAutoUnlockEventWithInfo:(id)a0 context:(id)a1;
- (void)sendEventAutoUnlockRewardInfo:(id)a0 context:(id)a1;
- (void)sendEventAutoUnlockRewardCountdown:(double)a0 textSuffix:(id)a1 context:(id)a2;
- (void)sendEventAutoUnlockRewardCountdownInfo:(double)a0 leftCountdown:(double)a1 context:(id)a2;
- (void)sendEventAutoUnlockEvent:(long long)a0 context:(id)a1;
- (void)cancelAutoUnlockForModel:(id)a0 manual:(BOOL)a1;
- (void)sendEventToInteraction:(id)a0 object:(id)a1 context:(id)a2;
- (id)trackCommonParams:(id)a0;
- (BOOL)shouldActiveBaseConditionAutoUnlock;
- (BOOL)enableAutoUnlockCheckCancelCount;
- (void)recordClickCancelTimeAndCount;
- (BOOL)isFromAdVertise;
- (void)resetStorageRecord;
- (void).cxx_destruct;
- (void)play;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
