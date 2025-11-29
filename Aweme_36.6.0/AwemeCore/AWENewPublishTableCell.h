@class UIImageView, UILabel, UIView;

@interface AWENewPublishTableCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descrLabel;
@property (retain, nonatomic) UILabel *accessLabel;
@property (retain, nonatomic) UIImageView *accessImageView;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) BOOL disableAndAllGrey;

- (void)setAwe_disableEdit:(BOOL)a0;
- (void)addSubviewsForContentView;
- (void)endLoading;
- (BOOL)isShowingBadge;
- (void)addBadge;
- (void)removeBadge;
- (void)p_updateAccessLabelLeadingWithView:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)startLoading;

@end
