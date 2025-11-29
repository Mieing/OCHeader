@class UILabel;

@interface WCFinderLandScapeTableViewSectionHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *headerLabel;

+ (double)headerH;
+ (id)headerID;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setup;
- (void)setupLayout;
- (void)updateWithTitle:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
