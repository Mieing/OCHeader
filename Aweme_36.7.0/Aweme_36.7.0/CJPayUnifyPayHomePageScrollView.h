@class UIScrollView, MASConstraint, UIView;

@interface CJPayUnifyPayHomePageScrollView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *moreGradientView;
@property (nonatomic) BOOL isSupportScroll;
@property (nonatomic) double topMargin;
@property (retain, nonatomic) MASConstraint *scrollViewTopMarginConstraint;
@property (retain, nonatomic) MASConstraint *firstFixedViewTopMarginConstraint;
@property (retain, nonatomic) UIView *bottomSubView;
@property (retain, nonatomic) UIView *scrollContentView;

- (void)p_setupUIForScroll;
- (id)p_addViewList:(id)a0 toView:(id)a1 isAddTopMargin:(BOOL)a2;
- (void)scrollToTargetView:(id)a0;
- (void)updateTopMargin:(long long)a0;
- (void)refreshWithViewList:(id)a0 topMargin:(long long)a1 isSupportScroll:(BOOL)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)currentContentHeight;

@end
