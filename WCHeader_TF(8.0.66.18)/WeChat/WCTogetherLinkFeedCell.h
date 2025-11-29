@class WCImageView, UIImageView, MMWebImageView, UIView, MMUILabel;

@interface WCTogetherLinkFeedCell : WCTogetherBaseFeedCell

@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) WCImageView *iconImageView;
@property (retain, nonatomic) MMWebImageView *iconWebImageView;
@property (retain, nonatomic) UIImageView *iconDefaultImageView;
@property (retain, nonatomic) UIView *playIconContainerView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;

+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadItemContentView;
- (void)loadIconViews;
- (void)layoutItemContentView;
- (void)contentDidTap;
- (void).cxx_destruct;

@end
