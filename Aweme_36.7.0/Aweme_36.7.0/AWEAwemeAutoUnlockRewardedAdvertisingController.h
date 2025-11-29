@class NSString, NSMutableDictionary, AWEAwemeModel;
@protocol AWEPlayletVIPAndIAAAutoOpenUtilProtocol;

@interface AWEAwemeAutoUnlockRewardedAdvertisingController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *autoUnlockInfoForItemID;
@property (nonatomic, getter=isEnteredADContainer) BOOL enteredADContainer;
@property (nonatomic, getter=isAlreadyViewDidAppear) BOOL alreadyViewDidAppear;
@property (retain, nonatomic) id<AWEPlayletVIPAndIAAAutoOpenUtilProtocol> playletVIPAndIAAAutoOpenUtil;
@property (retain, nonatomic) AWEAwemeModel *reloadBeforeCurrentModel;
@property (nonatomic) BOOL playFinishOpenContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRewardVideo;
- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)willPlay;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)willReloadData;
- (void)didReloadData;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)applicationWillResignActiveNotification:(id)a0;
- (id)getInteractionContext;
- (id)getAutoUnlockInfoForCurrentModel;
- (void)sendEventAutoUnlockEvent:(long long)a0;
- (void)cancelAutoUnlockForCurrentModel:(BOOL)a0;
- (id)getAutoUnlockInfoForModel:(id)a0;
- (void)sendEventOpenIAARewardADContainer:(BOOL)a0 context:(id)a1 model:(id)a2;
- (void)immediatelyOpenVipWithNoPreviewWithAwemeModel:(id)a0;
- (void)didLongPressShowSharePanelNotification:(id)a0;
- (BOOL)ignoreReloadAfterTableViewLifeCycleWithModel:(id)a0;
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
- (void)sendEventOpenIAARewardADContainer:(BOOL)a0 context:(id)a1 model:(id)a2 containerParams:(id)a3;
- (void)cancelAutoUnlockForModel:(id)a0 manual:(BOOL)a1;
- (void)sendEventToInteraction:(id)a0 object:(id)a1 context:(id)a2;
- (id)trackCommonParams:(id)a0;
- (BOOL)autoUnlockNextIAAPreloadEnable;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
