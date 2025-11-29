@class UIImageView, UITextField, UIButton;

@interface AWELiveVisibleScopeSearchBar : UIView

@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearBtn;
@property (copy, nonatomic) id /* block */ clearSearchViewBlock;

- (void)clearButtonClicked:(id)a0;
- (void)setupViewFrame;
- (void)clearSearchView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
