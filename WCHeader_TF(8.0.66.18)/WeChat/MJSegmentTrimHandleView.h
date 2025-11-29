@class NSString, UIImageView, MMUIView, CAShapeLayer;

@interface MJSegmentTrimHandleView : MMUIView <MJSegmentTrimHandleProtocol>

@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIImageView *leftTrimHandleImageView;
@property (retain, nonatomic) UIImageView *rightTrimHandleImageView;
@property (readonly, nonatomic) MMUIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } trimHandleViewInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } leftHitInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } rightHitInsets;
@property (nonatomic) BOOL isLeftExpandable;
@property (nonatomic) BOOL isRightExpandable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setupLayers;
- (void)layoutViews;
- (void)layoutInsetsRelatedViews;
- (void)layoutSubviews;
- (BOOL)respondsToPanGesture:(id)a0;
- (unsigned long long)trimmingEdgeForPanGesture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftTrimHandleHitRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightTrimHandleHitRect;
- (void).cxx_destruct;

@end
