@class UIImageView, UILabel, UIView;

@interface AWEPOIUGCRateSelectShopCell : UITableViewCell

@property (retain, nonatomic) UIImageView *selectedIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *scoreContainerView;
@property (retain, nonatomic) UIImageView *scoreImageView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *scoreTextLabel;

+ (double)normalHeightWithNewStyle:(BOOL)a0;
+ (double)itemHeightWithModel:(id)a0;

- (void)updateScoreViewWithInfo:(id)a0;
- (void)updateSubviewLayout;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
