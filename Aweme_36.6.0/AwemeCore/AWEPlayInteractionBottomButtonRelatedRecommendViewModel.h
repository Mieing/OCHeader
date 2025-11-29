@class NSString, AWERelatedRecommendInflowViewController, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonRelatedRecommendViewModel : NSObject <AWEPlayInteractionBottomButtonLifeCycleProtocol, AWERelatedRecommendInflowViewControllerDelegate, AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isLandscape;
@property (weak, nonatomic) AWERelatedRecommendInflowViewController *recommendVC;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (id)trackParams;
- (void)hideBottomButton;
- (long long)activateType;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (BOOL)shouldShowTemplateButtonRepeatedly;
- (void)viewController_viewDidAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })relatedRecommendCollectionViewFrameWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (id)getCommonTrackParams;
- (void)afterQuitFromLandscapeFeedNotification;
- (void)beforeEnterToLandscapeFeedNotification;
- (void)showBottomButtonWithTriggerType;
- (void)pushRelatedRecommendViewController;
- (void)videoPauseAction;
- (void)startPlayAction;
- (BOOL)needShow;
- (void)willDealloc;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)back;

@end
