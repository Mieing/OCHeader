@class MinimizeTaskData, CAShapeLayer, NSString, UIView, UIButton;
@protocol MinimizeTaskOuterContentViewDelegate;

@interface MinimizeTaskOuterContentView : UIView <MinimizeDetailTaskListViewInterface>

@property (nonatomic) unsigned long long positionType;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) UIView *shadowLayerView;
@property (retain, nonatomic) UIView *shadowSubLayerView;
@property (retain, nonatomic) UIButton *highlightView;
@property (retain, nonatomic) UIView *outerContentContainerView;
@property (retain, nonatomic) CAShapeLayer *outterBorderLayer;
@property (retain, nonatomic) CAShapeLayer *innerBorderLayer;
@property (weak, nonatomic) id<MinimizeTaskOuterContentViewDelegate> m_delegate;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqualToTaskKey:(id)a0;
- (void)attachOuterContentView;
- (BOOL)isOuterContentViewAttached;
- (unsigned long long)getPositionType:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePositionType:(unsigned long long)a0;
- (void)updateOuterContentContainerView;
- (void)updateMask:(BOOL)a0 Duration:(double)a1;
- (void)updateShadow:(BOOL)a0 Duration:(double)a1;
- (id)getDefaultClipPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 positionType:(unsigned long long)a1;
- (void)resetBorderLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateBorderLayer:(id)a0 VisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 PositionType:(unsigned long long)a2 BorderColor:(id)a3 BorderWidth:(double)a4;
- (void)setBackgroundViewHidden:(BOOL)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)showSubviewsWhenMaximizeEnd;
- (void)onBtnClicked:(id)a0;
- (BOOL)isSupportLongPress;
- (void)longPressed;
- (void).cxx_destruct;

@end
