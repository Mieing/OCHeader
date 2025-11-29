@class IESLiveCommonKTVOrderPanelModel, NSArray;
@protocol IESLiveMultiKTVChallengeActions, IESLiveKTVOptimizeSettingPanelModelDelegate, IESLiveKTVSettingActions;

@interface IESLiveKTVOptimizeSettingPanelModel : NSObject

@property (nonatomic) BOOL challengeIsOn;
@property (nonatomic) BOOL applyIsOn;
@property (nonatomic) BOOL chorusIsOn;
@property (nonatomic) BOOL disableInStageIsOn;
@property (retain, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (weak, nonatomic) id<IESLiveKTVSettingActions> ktvSettingActions;
@property (weak, nonatomic) id<IESLiveMultiKTVChallengeActions> challengeActions;
@property (weak, nonatomic) id<IESLiveKTVOptimizeSettingPanelModelDelegate> delegate;
@property (retain, nonatomic) NSArray *cellModels;

- (id)canApplySingSignal;
- (id)canMultiChorusSingSignal;
- (id)disableMixLyricShowingInStageSignal;
- (BOOL)isProcessingTeamFight;
- (void)initState;
- (id)initWithPanelModel:(id)a0;
- (void)addSwitchObserver;
- (BOOL)needChallengView;
- (id)challengeOpenSignal;
- (void)tr_applySwitchClickWithType:(id)a0;
- (long long)applyArrayCount;
- (BOOL)isFirstApplySwitchOn;
- (BOOL)enableOpenMultiChorus;
- (void)didClickedChorusRuleBtn;
- (unsigned long long)getRevenueScene;
- (void).cxx_destruct;
- (void)buildItems;
- (void)rebuild;

@end
