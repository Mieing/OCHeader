@class NSString, UIView;
@protocol WAMediaCastingPageSheetDelegate;

@interface WAMediaCastingPageSheet : MMUIWindow <UIGestureRecognizerDelegate, IUiUtilExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL shouldRelease;
@property (weak, nonatomic) id<WAMediaCastingPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)setupRootViewController;
- (void)show;
- (void)dismiss;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (struct CGPoint { double x0; double x1; })containerPoint;
- (BOOL)cornerRaduis;
- (struct CGPoint { double x0; double x1; })containerShowAnimationStartPoint;
- (struct CGPoint { double x0; double x1; })containerDismissAnimationEndPoint;
- (void)reloadInnerView;
- (void)addTapRecognizer;
- (void)handleTap:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)deviceDidRotate:(id)a0;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;

@end
