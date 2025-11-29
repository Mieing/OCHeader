@class BDPUniqueID;

@interface BDPAutoUpdatePluginTips : UILabel

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } buttonFrameBeforeDragging;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)setupPanGestures;
- (void)handleButtonPanGesture:(id)a0;
- (void)updateButtonPositionWithDragGesture:(id)a0;
- (void)updateButtonPositionWithUnconstrainedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewSafeArea;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
