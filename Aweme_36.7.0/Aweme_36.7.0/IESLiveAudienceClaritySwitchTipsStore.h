@class IESLiveAudienceClaritySwitchTipsModel, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveAudienceClaritySwitchTipsReactions;

@interface IESLiveAudienceClaritySwitchTipsStore : NSObject

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isShowingTips;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) IESLiveAudienceClaritySwitchTipsModel *tipsModel;
@property (nonatomic) unsigned long long maxCloseTimes;
@property (nonatomic) unsigned long long maxShowTimes;
@property (nonatomic) unsigned long long safeInterval;
@property (nonatomic) long long tipsViewShowCount;
@property (nonatomic) long long tipsViewExitCount;
@property (weak, nonatomic) id<IESLiveAudienceClaritySwitchTipsReactions> reactions;

- (void)didSetAttachingDIContext;
- (id)commonParams;
- (id)_logParams;
- (void)_showTips;
- (BOOL)checkCurrentIsMemResolution;
- (id)initWith:(id)a0 componentContext:(id)a1;
- (void)analysisStrategyInfo;
- (void)handleTriggerAction:(unsigned long long)a0;
- (void)tipsViewDidTriggerExit;
- (void)tipsViewDidTriggerSwitch;
- (BOOL)checkChangeResolutionEnable;
- (BOOL)shouldShowWithStallDegrade;
- (BOOL)shouldShowWithLimitShowCount;
- (BOOL)shouldShowWithLimitCloseCount;
- (BOOL)shouldShowWithLimitSafeInterval;
- (void)_handleEnterTriggerAction;
- (void)_handleNetworkChangedTriggerAction;
- (void)_appendExitCount;
- (void)_activeHiddenTips;
- (void)_trackTipsClose;
- (void)_logEvent:(id)a0 params:(id)a1;
- (void)_trackTipsClick;
- (BOOL)_isReachableViaWWAN;
- (void)_appendShowCount;
- (void)_setLastShowTime;
- (void)_trackTipsShow;
- (void)_hiddenTips;
- (void).cxx_destruct;

@end
