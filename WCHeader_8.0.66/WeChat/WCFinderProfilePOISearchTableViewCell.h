@class FavAttributeCPLabel, UIImageView, UIView;

@interface WCFinderProfilePOISearchTableViewCell : UITableViewCell

@property (retain, nonatomic) FavAttributeCPLabel *nameLabel;
@property (retain, nonatomic) FavAttributeCPLabel *addrLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *lineView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateMargin;
- (void)configWithPOIInfo:(id)a0 hideLine:(BOOL)a1;
- (id)distanceByPOIInfo:(id)a0;
- (void).cxx_destruct;

@end
