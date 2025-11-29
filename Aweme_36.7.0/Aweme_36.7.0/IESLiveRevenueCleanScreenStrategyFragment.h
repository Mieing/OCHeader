@class NSMutableDictionary, NSMutableString, NSString, NSMutableArray;

@interface IESLiveRevenueCleanScreenStrategyFragment : IESLiveRoomComponent <PuzzleKitViewLifeCycleProtocol, HTSLiveGiftActions, IESLiveChargeActions, IESLiveRevenueCleanScreenStrategyService>

@property (retain, nonatomic) NSMutableArray *sceneArray;
@property (retain, nonatomic) NSMutableDictionary *sceneNodes;
@property (retain, nonatomic) NSMutableString *logInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)giftViewWillShow;
- (void)giftViewWillDismiss;
- (void)didStartRechargeProgress;
- (void)rechargeProgressEnded;
- (BOOL)enableCleanScreen;
- (void)didEnterRevenueSceneWithPageKey:(id)a0;
- (void)didExitRevenueSceneWithPageKey:(id)a0;
- (void)handlePuzzlePanelWebViewShowNotification:(id)a0;
- (void)handleLivePopupDeallocNotification:(id)a0;
- (void)monitor_clearTypeErrorWithClearType:(long long)a0;
- (id)getSceneNodeWithPageTag:(id)a0;
- (void)enterRevenueSceneWithNode:(id)a0;
- (void)exitRevenueSceneWithNode:(id)a0;
- (id)getSceneNodeWithHybridURL:(id)a0;
- (void)log_enterRevenueSceneWithNode:(id)a0;
- (void)updatePowerSaveTypeIfNeeded;
- (void)log_exitRevenueSceneWithNode:(id)a0;
- (long long)clearTypeWithLevel:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
