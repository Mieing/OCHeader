@class UIImageView, UILabel, UIView;

@interface MMFinderLiveCustomizeRewardTableCellBase : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) BOOL rewardInfoEnable;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *rewardPriceLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (nonatomic) BOOL showSepLine;
@property (nonatomic) BOOL showTopCorners;
@property (nonatomic) BOOL showBottomCorners;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviewsForStyle;
- (void)initSubviewsForRewardInfo;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutSubviewsForStyle;
- (void)layoutSubviewsForRewardInfo;
- (void)setRewardInfoWithThumbUrl:(id)a0 rewardName:(id)a1 rewardPrice:(float)a2;
- (void).cxx_destruct;

@end
