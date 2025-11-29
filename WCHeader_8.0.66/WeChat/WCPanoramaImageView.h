@class UIImageView, CMMotionManager, UIScrollView, UIImage;

@interface WCPanoramaImageView : MMUIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double motionRate;
@property (nonatomic) long long minimumXOffset;
@property (nonatomic) long long maximumXOffset;
@property (nonatomic) BOOL shouldStartMonitoring;
@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)doStartMonitor;
- (void).cxx_destruct;

@end
