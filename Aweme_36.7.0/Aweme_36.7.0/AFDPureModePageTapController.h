@class UITapGestureRecognizer, NSString, NSObject;
@protocol AWEAwemePlayInteractionInteractorProtocol;

@interface AFDPureModePageTapController : AWEBaseController <AFDPureModePageControllerProtocol>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct CGPoint { double x; double y; } singleClickedPoint;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playDiggAnimationInView:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 image:(id)a2;
- (void)onVideoPlayerViewClicked:(id)a0;
- (void)onVideoPlayerViewSingleClicked:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1;
- (void)onVideoPlayerViewDoubleClicked:(id)a0;
- (void).cxx_destruct;
- (id)layer;
- (id)view;
- (void)viewDidLoad;

@end
