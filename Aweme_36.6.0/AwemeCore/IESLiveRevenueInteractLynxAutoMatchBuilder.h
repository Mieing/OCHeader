@class NSString, IESLiveMultiLinkerAutoMatchPanel, IESLiveMultiLinkerApi, HTSLivePKApi, BattleAutoMatchResult_PreviewUser;

@interface IESLiveRevenueInteractLynxAutoMatchBuilder : NSObject <IESLiveRevenueInteractAction, IESLiveRevenueInteractLynxAutoMatchBuilderService>

@property (retain, nonatomic) HTSLivePKApi *pkApi;
@property (retain, nonatomic) IESLiveMultiLinkerApi *multiLinkerApi;
@property (retain, nonatomic) BattleAutoMatchResult_PreviewUser *lastPreviewUser;
@property (retain, nonatomic) IESLiveMultiLinkerAutoMatchPanel *autoMatchPanel;
@property (nonatomic) double autoMatchStartTime;
@property (nonatomic) double speedupStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)didClickCancelButton;
- (void)bindAction;
- (void)stopAutoMatch;
- (id)baseMonitorParams;
- (id)setupAutoMatchViewWithRecommendInfo:(id)a0 type:(long long)a1;
- (id)linkerModel;
- (void)exitMatchBell;
- (void)rejectMatchBell;
- (void)acceptMatchBell;
- (void)laterMatchBell;
- (void)switchToRandomTeamLocalAndStreamLayoutWithAnchorExtraModel:(id)a0;
- (void)updateInteractActionFromSource:(long long)a0;
- (void)p_logEvent:(id)a0 extra:(id)a1;
- (id)currentUserService;
- (void)didClickSpeedUpButton;
- (unsigned long long)calculateMatchedDuration;
- (unsigned long long)calculateSpeedUpDuration;
- (id)multiMatchAnchorType;
- (id)autoMatchModel;
- (void)getAutoMatchSetting;
- (void)onReceivedPKActivePush:(id)a0;
- (void)startAutoMatchWithType:(long long)a0 params:(id)a1;
- (void)showMultiAutoMatchPanel:(long long)a0;
- (void)updateAutoMatchPredictWaitTime:(id)a0;
- (void)updateMatchBell:(id)a0;
- (void)updateAutoMatchState:(long long)a0 state:(int)a1;
- (void)displayAutoMatchAlertPanelWithType:(long long)a0;
- (void)notifyLynxStartAutoMatch:(id)a0;
- (void)notifyLynxStopAutoMatch;
- (BOOL)isMultiMatchType:(long long)a0;
- (void).cxx_destruct;
- (id)provider;

@end
