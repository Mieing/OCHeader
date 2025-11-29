@class UIButton;

@interface AWESearchDetailPageNaviBar : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (copy, nonatomic) id /* block */ leftButtonClickBlock;

+ (double)detailPageNavigationBarHeight;

- (void)leftButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
