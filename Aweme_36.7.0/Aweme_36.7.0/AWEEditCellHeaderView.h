@class DUXDivider, UIView;

@interface AWEEditCellHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *gapView;
@property (retain, nonatomic) DUXDivider *divider;

+ (id)identifier;

- (void)__configUI;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
