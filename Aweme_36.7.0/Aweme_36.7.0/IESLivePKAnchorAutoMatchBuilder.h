@class NSString, IESLiveCountTimer, IESLiveRevenueInteractAutoMatchBuilder, HTSLivePKApi, UIViewController;
@protocol IESHYControllerProtocol, IESLivePKModel, IESLivePKProvider;

@interface IESLivePKAnchorAutoMatchBuilder : NSObject <IESLivePKAnchorAutoMatchBuilderService, IESLiveRevenueInteractAutoMatchBuilderDelegate>

@property (retain, nonatomic) HTSLivePKApi *pkApi;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) id<IESLivePKModel> pkModel;
@property (retain, nonatomic) IESLiveCountTimer *autoMatchTimer;
@property (retain, nonatomic) IESLiveCountTimer *matchBellTimeOutTimer;
@property (nonatomic) unsigned long long lastPrecisionMatchID;
@property (retain, nonatomic) IESLiveRevenueInteractAutoMatchBuilder *autoMatchCommonBuilder;
@property (nonatomic) BOOL disableClickAutoMatch;
@property (copy, nonatomic) NSString *autoMatchClickResult;
@property (nonatomic) BOOL shouldShowLongWaitTips;
@property (nonatomic) BOOL isSeasonMatchType;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *matchBellDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (void)stopAutoMatch;
- (void)trackAutoMatchFailWithExtra:(id)a0;
- (void)showTipsIfNeed;
- (void)startAutoMatch;
- (void)startAutoMatchWithConfig:(id)a0;
- (void)cancelAutoMatchTimer;
- (void)leaveAutoMatchPool;
- (void)exitMatchBell;
- (void)rejectMatchBell;
- (void)acceptMatchBell;
- (void)laterMatchBell;
- (void)onReceivedBattleNotifyPointMessage:(id)a0;
- (void)onReceivedBattleMatchInviteMessage:(id)a0;
- (void)cancelMatchBellTimeoutTimer;
- (void)getAutoMatchSetting;
- (void)onReceivedPKActivePush:(id)a0;
- (void)onReceivedPrecisionMatchMessage:(id)a0;
- (void)handleAutoMatchResult:(id)a0 signExtra:(id)a1 battleAttachedInfo:(id)a2;
- (void)trackCohostGameStartGuidePageClickResult;
- (void)startAutoMatchProcess;
- (void)showAutoMatchAlertPanelWithConfig:(id)a0;
- (void)realStartAutoMatch;
- (void)tryAutoMatch:(BOOL)a0 isHighWay:(BOOL)a1 battleAttachedInfo:(id)a2;
- (void)p_trackWithLimitErrorCodeIfNeeded:(unsigned long long)a0;
- (void)setupAutoMatchTimer:(long long)a0;
- (void)logPrecisionMessageReceived:(id)a0;
- (void)handleGuildActivityPrecisionMatchMessage:(id)a0;
- (void)handleActivityPrecisionMatchMessage:(id)a0;
- (void)dismissMatchBellDialog;
- (void)updateAutoMatchersStatus:(id)a0;
- (void)startMatchBellTimeoutTimer;
- (void)showMatchBellBattleInvitePanel:(id)a0;
- (id)resolveMatchUser:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
