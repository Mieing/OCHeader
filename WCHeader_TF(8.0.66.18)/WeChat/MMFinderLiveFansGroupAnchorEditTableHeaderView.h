@class UILabel, NSString;

@interface MMFinderLiveFansGroupAnchorEditTableHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) NSString *title;

+ (id)reuseId;

- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
