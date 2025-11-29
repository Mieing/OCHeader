@class NSString, UIImage, UIView;

@interface AFDStroyDiverseDiggAnimationContext : NSObject

@property (copy, nonatomic) NSString *actionID;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) long long animationType;
@property (nonatomic) double labelOffset;

- (void).cxx_destruct;

@end
