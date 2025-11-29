@class UILabel;

@interface AWERelationFollowGroupHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;

+ (double)headerHeight;
+ (id)identifier;

- (void)headerFooterViewConfigTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
