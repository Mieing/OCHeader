@class UITextField, UIImageView, UILabel, UIButton;
@protocol AWEIMCommonSearchBarDelegate;

@interface AWEIMCommonSearchBar : UIView

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearBtn;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (weak, nonatomic) id<AWEIMCommonSearchBarDelegate> delegate;
@property (nonatomic) BOOL showClearButtonWhenSearchTextIsNotEmpty;

- (void)clearButtonClicked:(id)a0;
- (void)addSubviews;
- (void)registKVO;
- (void)showClearButtonIfNeeded;
- (void)showPlaceholderLabelIfNeeded;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (void)setPlaceholder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setup;
- (void)setupLayout;

@end
