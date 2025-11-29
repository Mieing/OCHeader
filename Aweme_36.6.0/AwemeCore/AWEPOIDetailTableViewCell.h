@class UIView;

@interface AWEPOIDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *cellSeparator;

+ (id)titleTextFont;
+ (id)titleTextColor;
+ (double)leadingSpace;

- (void)p_setup;
- (void)p_setupSeparator;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showSeparator;
- (void)awakeFromNib;
- (void)setup;
- (void)hideSeparator;

@end
