@class CAMediaTimingFunction;

@interface AWEIMCollapsibleTopContainerAnimationContext : NSObject

@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CGSize { double width; double height; } containerTargetSize;

- (void).cxx_destruct;

@end
