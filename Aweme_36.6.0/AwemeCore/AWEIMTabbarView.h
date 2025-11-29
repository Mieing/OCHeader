@class NSArray, AWEIMTabbarItem, UIView;
@protocol AWEIMTabbarViewDelegate;

@interface AWEIMTabbarView : UIView

@property (weak, nonatomic) id<AWEIMTabbarViewDelegate> delegate;
@property (retain, nonatomic) NSArray *tabbarItems;
@property (retain, nonatomic) UIView *tabbarLineView;
@property (retain, nonatomic) AWEIMTabbarItem *selectedTabbarItem;
@property (nonatomic) BOOL shouldHideBottomLineView;
@property (nonatomic) long long style;
@property (nonatomic) long long selectedIndex;

- (void)updateTabbarViewStatusWithScrollView:(id)a0;
- (void)updateTabbarLineViewFrameWithIndex:(long long)a0;
- (void)__setupLineViewForTabbarView;
- (double)__tabbarLineViewWidthAtIndex:(long long)a0;
- (double)__lineViewOffsetXWithLowIndex:(long long)a0 currentLineWidth:(double)a1 paddingIndexOffset:(double)a2;
- (void)__updateTabbarLineViewFrameWithLowIndex:(long long)a0 offsetProcess:(double)a1;
- (BOOL)__outOfRangeWithIndex:(long long)a0;
- (id)__tabbarItemAtIndex:(long long)a0;
- (void)configWithDelegate:(id)a0 tabbarItems:(id)a1 type:(long long)a2;
- (void).cxx_destruct;

@end
