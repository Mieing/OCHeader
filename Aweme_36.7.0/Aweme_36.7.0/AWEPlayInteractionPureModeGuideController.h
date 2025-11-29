@class NSString, UILabel, UIView, BDImageView;

@interface AWEPlayInteractionPureModeGuideController : AWEPlayInteractionNewBaseController <AWEPureModePageMessage>

@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) BDImageView *animationView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pureModePageDidExitWithModel:(id)a0 info:(id)a1;
- (void)hidePinchGestureGuideWithAnimated:(BOOL)a0;
- (BOOL)shouldShowGuide;
- (void)showPinchGestureGuide;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)handlePanGestureRecognizer:(id)a0;
- (void)handleTapGestureRecognizer:(id)a0;
- (void)handlePinchGestureRecognizer:(id)a0;
- (void)viewWillDisappear;

@end
