@class UIFont, NSArray, UIColor, UIScrollView, NSMutableArray, UIView;
@protocol BrandProfileTabViewDelegate;

@interface BrandProfileTabView : MMUIView

@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<BrandProfileTabViewDelegate> delegate;
@property (retain, nonatomic) NSArray *itemInfoList;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleNormalColor;
@property (retain, nonatomic) UIColor *titleSelectedColor;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (nonatomic) double indicatorHeight;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) long long alwaysClickableIndex;
@property (nonatomic) long long indicatorIgnoreIndex;

- (id)init;
- (void)setupScrollView;
- (void)setupIndicatorView;
- (void)recreateButtonList;
- (void)layoutSubviews;
- (double)calcuteTabViewHeight;
- (BOOL)isNoSubviews;
- (void)onTabButtonClick:(id)a0;
- (void)setSelectedIndex:(long long)a0 selectType:(unsigned long long)a1;
- (void)updateSelectedIndex:(long long)a0;
- (void)updateSelectedIndicatorFrame:(BOOL)a0;
- (void).cxx_destruct;

@end
