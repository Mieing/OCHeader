@class UIButton, NSString, UIView;

@interface IESGCPCGDraggableDefaultLynxView : UIView <IESGCPCGDraggableContainerProtocol>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *exitButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (BOOL)needTransitionAnimation;
- (void)_moreButtonDidClick;
- (void)_exitButtonDidClick;
- (struct CGSize { double x0; double x1; })expectedContainerSize;
- (BOOL)isMainDecoration;
- (BOOL)attachToSide;
- (double)attachToSideDelayTime;
- (double)attachAnimationDuration;
- (BOOL)forbidPan;
- (BOOL)shouldFold;
- (BOOL)needAutoDismiss;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;

@end
