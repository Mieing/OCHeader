@class AWEECMallSegmentedIndicator;

@interface AWEECMallSegmentedIndicatorLayout : NSObject

@property (retain, nonatomic) AWEECMallSegmentedIndicator *indicator;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorFrameWithItemLayoutInfo:(id)a0 indicatorConfig:(id)a1 containerHeight:(double)a2;
+ (id)layoutWithIndicator:(id)a0;

- (void)updateIndicatorFrameWithItemLayoutInfo:(id)a0 indicatorConfig:(id)a1 containerHeight:(double)a2;
- (void).cxx_destruct;

@end
