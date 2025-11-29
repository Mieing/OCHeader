@class UILabel, UIImageView, MMFinderLiveRewardGiftItem;

@interface MMFinderLiveConnectMicExtendedPkSelectDesignatedGiftItemTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *bulletLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateThumbnail;
- (void).cxx_destruct;

@end
