@class MMUILabel, UIView;

@interface WCFinderPostUsualHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) MMUILabel *titleLabel;

+ (id)createLabel;
+ (double)descriptionTableViewCellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;
- (void)setUpTitle:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
