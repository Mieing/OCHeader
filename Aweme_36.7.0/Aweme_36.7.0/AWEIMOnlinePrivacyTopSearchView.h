@class UIImageView, UITextField, UIView, UIButton;

@interface AWEIMOnlinePrivacyTopSearchView : UIView

@property (retain, nonatomic) UIView *cuttingline;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearButton;

- (void)clearButtonClicked:(id)a0;
- (void)clearSearchView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
