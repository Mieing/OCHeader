@class UIImageView, MMFinderLiveRewardGiftItem, UILabel, UIView;

@interface MMFinderLiveConnectMicPkDesignatedGiftSelectionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *thumbnailContainerView;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) UILabel *pricingLabel;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateGiftItem;
- (void).cxx_destruct;

@end
