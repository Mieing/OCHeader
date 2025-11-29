@class UIImage, NSString, UIView;

@interface AFDStoryDiverseDiggAnimatorContext : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) double labelOffset;

- (void).cxx_destruct;

@end
