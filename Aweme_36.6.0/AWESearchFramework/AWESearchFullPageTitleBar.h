@class NSString, UIImageView, UILabel, UIButton;

@interface AWESearchFullPageTitleBar : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *historySearchButton;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) NSString *titleString;
@property (copy, nonatomic) id /* block */ didClickCloseButtonBlock;
@property (copy, nonatomic) id /* block */ didClickHistoryButtonBlock;

- (void)configUI;
- (void)shouldShowTitleWith:(id)a0;
- (void)updateTitleAlphaWith:(double)a0;
- (void)closeSearch;
- (void)openHistoryView;
- (void)updateTitleBarWithTheme:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)hideTitle;

@end
