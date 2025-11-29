@class UILabel, UIButton, UIView;
@protocol AWEEcomSearchPlainBarDelegate;

@interface AWEEcomSearchPlainBar : UIView

@property (retain, nonatomic) UILabel *queryLabel;
@property (retain, nonatomic) UIButton *photoButton;
@property (retain, nonatomic) UIButton *queryButton;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *icon;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<AWEEcomSearchPlainBarDelegate> delegate;

- (id)searchIcon;
- (void)queryButtonTapped:(id)a0;
- (void)barTapped:(id)a0;
- (void)updateFullCornerStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)photoButtonTapped:(id)a0;
- (void)updateQuery:(id)a0;

@end
