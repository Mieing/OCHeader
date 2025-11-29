@class MMLiveTabsBarViewInitParameter, NSArray, UIView;
@protocol MMLiveTabsBarViewDelegate;

@interface MMLiveTabsBarView : UIView

@property (retain, nonatomic) MMLiveTabsBarViewInitParameter *param;
@property (retain, nonatomic) NSArray *tabButtons;
@property (retain, nonatomic) UIView *tabIndicatorView;
@property (nonatomic) double currentIndex;
@property (weak, nonatomic) id<MMLiveTabsBarViewDelegate> delegate;

- (id)initWithParameter:(id)a0;
- (void)layoutSubviews;
- (void)setTabTitles:(id)a0;
- (void)buildTabsWithTitles:(id)a0;
- (void)buildTabIndicatorIfNeeded;
- (id)buildTabButtonWithIndex:(unsigned long long)a0 title:(id)a1;
- (void)onSelectTab:(id)a0;
- (void).cxx_destruct;

@end
