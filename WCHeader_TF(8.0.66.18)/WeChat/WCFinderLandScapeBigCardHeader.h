@class UILabel, UIView;

@interface WCFinderLandScapeBigCardHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *bgView;

+ (double)headerH;
+ (id)headerID;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setup;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
