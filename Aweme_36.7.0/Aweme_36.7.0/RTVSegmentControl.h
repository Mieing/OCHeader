@class NSArray, UIView, RTVSegmentControlConfiguration;

@interface RTVSegmentControl : UIControl

@property (readonly, copy, nonatomic) NSArray *titles;
@property (readonly, nonatomic) RTVSegmentControlConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *itemViews;
@property (readonly, nonatomic) UIView *segmentBlock;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL segmentBlockTracking;
@property (copy, nonatomic) id /* block */ enableToSwitchSegment;

- (void)__createComponents;
- (void)switchToIndex:(unsigned long long)a0;
- (void)__refreshAppearanceWithConfiguration:(id)a0;
- (BOOL)__updateSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (long long)theTargetSelectedIndexForTouch:(id)a0 enableThreshold:(BOOL)a1;
- (void)__updateSegmentBlockTracking:(BOOL)a0;
- (id)__createItemViewWithTitles:(id)a0;
- (void)__refreshItemViewAtIndex:(long long)a0;
- (id)initWithTitles:(id)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
