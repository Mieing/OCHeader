@class NSString, MMUILabel;

@interface WCFinderNotifyCenterSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

+ (double)descriptionTableViewCellHeight;
+ (double)descriptionTableViewCellHeight:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;
- (void)updateTitle:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;

@end
