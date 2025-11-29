@class UIButton, UITextField, UIImageView;
@protocol AWEIMSearchBarDelegate;

@interface AWEIMSearchBar : UIView

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearBtn;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (weak, nonatomic) id<AWEIMSearchBarDelegate> delegate;

- (void)clearButtonClicked:(id)a0;
- (void)setupViewFrame;
- (void).cxx_destruct;
- (void)cancelSearch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
