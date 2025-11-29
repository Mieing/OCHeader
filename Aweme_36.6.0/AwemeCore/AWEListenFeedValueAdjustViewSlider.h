@interface AWEListenFeedValueAdjustViewSlider : UISlider

@property (nonatomic) unsigned long long style;

- (void)changeAccessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)accessibilityIncrement;
- (void)setValue:(float)a0;

@end
