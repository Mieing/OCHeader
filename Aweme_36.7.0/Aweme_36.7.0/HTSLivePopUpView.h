@class NSString, UIView;
@protocol IESLivePopupPanService, IESLivePerfSampler;

@interface HTSLivePopUpView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<IESLivePopupPanService> popupPanService;
@property (nonatomic) double appearTime;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) BOOL noAutoHide;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL hideOnTap;
@property (nonatomic) BOOL forwardEvent;
@property (nonatomic) BOOL enablePullDown;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long orientation;
@property (nonatomic) double landscapeTopOffset;
@property (nonatomic) double landscapePaddingOffset;
@property (copy, nonatomic) id /* block */ onHideStart;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (copy, nonatomic) id /* block */ customShowBlock;
@property (copy, nonatomic) id /* block */ customHideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAnimationWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseSideStyle;
- (void)hideWithDestroy:(BOOL)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (void)didTapSelf;

@end
