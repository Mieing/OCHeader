@class NSString, UILabel;

@interface AWESearchResultRefreshHeaderToastView : UIView

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)configUI;
- (void)updateTheme:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
