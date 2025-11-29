@protocol AWELandscapeProgressContainerViewDelegate;

@interface AWELandscapeProgressContainerView : UIView

@property (nonatomic) double totalTime;
@property (nonatomic) double playedTime;
@property (weak, nonatomic) id<AWELandscapeProgressContainerViewDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;

@end
