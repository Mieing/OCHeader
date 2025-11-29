@class UILabel, UIImageView, MMFinderLiveGroupedBadgeView;

@interface MMFinderLivePaidConnectMicAudienceOperationPanelUserCell : UITableViewCell

@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) MMFinderLiveGroupedBadgeView *groupedBadgeView;
@property (retain, nonatomic) UIImageView *wecoinIconImageView;
@property (retain, nonatomic) UILabel *priceAmountLabel;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)configWithUser:(id)a0 rank:(unsigned long long)a1 showPriceAmount:(BOOL)a2;
- (id)liveTaskId;
- (void).cxx_destruct;

@end
