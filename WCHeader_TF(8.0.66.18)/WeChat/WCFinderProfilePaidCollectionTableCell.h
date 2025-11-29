@class WCFinderProfilePaidCollectionCellContentView, UIView;

@interface WCFinderProfilePaidCollectionTableCell : UITableViewCell

@property (retain, nonatomic) WCFinderProfilePaidCollectionCellContentView *courseContentView;
@property (retain, nonatomic) UIView *bottomSeperator;
@property (nonatomic) BOOL isLastCell;

+ (double)cellHeightWithPaidCollection:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithPaidCollection:(id)a0 isLastCell:(BOOL)a1;
- (void)layoutSeperator;
- (void).cxx_destruct;

@end
