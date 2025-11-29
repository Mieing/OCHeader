@class AWEPageContext, NSString, AWEPlayInteractionContext, AWEPlayInteractionBottomButtonLongVideoContainerView, AWECommonButtonInfoModel, AWEPlayInteractionBottomButtonLongVideoComponentViewModel, CADisplayLink;
@protocol AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPaidStreamControlProtocol;

@interface AWEPlayInteractionBottomButtonLongVideoComponent : NSObject <AWELongVideoPlusSelectPanelDelegate, AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonLongVideoComponentViewModel *viewModel;
@property (nonatomic) BOOL autoEnterCanceled;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonLongVideoContainerView *containerView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL hasReportTry;
@property (nonatomic) BOOL hasReportTryEnd;
@property (nonatomic) BOOL hasReportStatusChange;
@property (nonatomic) double currPlayTime;
@property (nonatomic) long long currWatchStatus;
@property (nonatomic) double clickTimeStamp;
@property (nonatomic) BOOL isProductCardShow;
@property (nonatomic) BOOL inAutoEnterTime;
@property (nonatomic) BOOL isVideoActive;
@property (nonatomic) BOOL hasAutoEnterIAA;
@property (nonatomic) BOOL hasReportShowTrack;
@property (nonatomic) BOOL hasFreeTrialForLongVideoIAA;
@property (weak, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (id)commonTrackerParams:(id)a0;

- (void)videoDidActivity;
- (void)hideBottomButton;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void)viewController_willDisplay;
- (void)resetDisplayLink;
- (void)trackShowIfNeed;
- (id)trackCommonParams;
- (void)playResumeDisplayLink;
- (void)showBottomButton;
- (void)trackSelectionButtonClick;
- (void)handleClickEvent;
- (void)unlockVideo:(BOOL)a0;
- (void)cancelAutoEnter;
- (void)openBVIPOrder;
- (void)seekVideoEnd:(id)a0;
- (BOOL)enableAutoEnterIAA;
- (long long)autoEnterDuration;
- (void)updateButtonWithTimeLeft:(double)a0;
- (void)willOpenLongVideoIAARewardADContainerFromLandscapeNotification:(id)a0;
- (void)setupForIAA;
- (void)updateBottomButtonShowStatus;
- (id)getUnlockButtonTitle;
- (void)seekVideoBegin:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)buttonView;

@end
