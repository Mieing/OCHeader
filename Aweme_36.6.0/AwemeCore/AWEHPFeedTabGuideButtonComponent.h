@class AWEHPTabGuideButtonCandidate, NSString, AWEPageContext, UIView, AWECommonButtonInfoModel, AWEHPTabGuideComponentInfo;
@protocol AWEPlayInteractionBottomButtonViewProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionContextProtocol;

@interface AWEHPFeedTabGuideButtonComponent : NSObject <AWEHPTabGuideButtonPitayaTriggerShowHandler, AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> context;
@property (retain, nonatomic) UIView<AWEPlayInteractionBottomButtonViewProtocol> *buttonView;
@property (retain, nonatomic) AWEHPTabGuideButtonCandidate *bindCandidate;
@property (retain, nonatomic) AWEHPTabGuideComponentInfo *componentInfo;
@property (nonatomic) BOOL hasTrackProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (BOOL)checkCandidateCanShow:(id)a0;
+ (id)tryGetBindCandidateWithModel:(id)a0 context:(id)a1 isPreCheck:(BOOL)a2;

- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void)viewController_combinedDidEndDisplaying;
- (void)viewController_willDisplay;
- (void)p_reset;
- (void)handleClickLanding;
- (void)trackReachVideoPlayProgressIfNeed;
- (void)handleVideoPlayPeriod;
- (void)buttonDidClick;
- (double)currentVideoPlayDuration;
- (double)totalVideoPlayDuration;
- (id)customTrackParams;
- (void)triggerButtonShowWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)setupButtonView;

@end
