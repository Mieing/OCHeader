@class NSString, MMUIView, MJTrimHandle;

@interface MJAnotherSegmentTrimHandleView : MMUIView <MJSegmentTrimHandleProtocol>

@property (retain, nonatomic) MMUIView *foregroundView;
@property (retain, nonatomic) MJTrimHandle *leftHandle;
@property (retain, nonatomic) MJTrimHandle *rightHandle;
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
- (void)layoutViews;
- (BOOL)respondsToPanGesture:(id)a0;
- (unsigned long long)trimmingEdgeForPanGesture:(id)a0;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)a0;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)a0;
- (void)hideSnapIndicatorDot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftTrimHandleHitRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightTrimHandleHitRect;
- (void).cxx_destruct;

@end
