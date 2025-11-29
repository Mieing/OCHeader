@class UIImageView, UILabel, NSString;

@interface IESGCPCGDraggableExitView : UIView <IESGCPCGDraggableContainerProtocol>

@property (nonatomic) BOOL isFold;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)_unfold;
- (BOOL)needTransitionAnimation;
- (void)_onSelfClicked:(id)a0;
- (struct CGSize { double x0; double x1; })expectedContainerSize;
- (BOOL)isMainDecoration;
- (BOOL)attachToSide;
- (double)attachToSideDelayTime;
- (double)attachAnimationDuration;
- (BOOL)forbidPan;
- (BOOL)shouldFold;
- (double)foldDelayTime;
- (double)foldAnimationDuration;
- (double)foldHiddenLength;
- (BOOL)foldNeededScale;
- (BOOL)needAutoDismiss;
- (double)timeForAutoDismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFold:(BOOL)a1;
- (BOOL)_superViewOnLeftOfScreen;
- (void)dismiss;
- (void).cxx_destruct;
- (void)_setupViews;
- (void)_setupTapGesture;
- (void)_fold;

@end
