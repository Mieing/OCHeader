@class NSString, UIButton, UIView;

@interface AWEIMSwipeActionTransitioningContext : NSObject

@property (copy, nonatomic) NSString *actionIdentifier;
@property (nonatomic) double oldPercentVisible;
@property (nonatomic) double newPercentVisible;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *wrapperView;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;

@end
