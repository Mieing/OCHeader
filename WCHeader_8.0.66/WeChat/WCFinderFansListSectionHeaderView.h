@class NSString, MMUILabel;

@interface WCFinderFansListSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
