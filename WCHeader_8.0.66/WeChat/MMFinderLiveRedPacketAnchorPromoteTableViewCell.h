@class MMFinderLiveRedPacketAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveRedPacketAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *redPacketImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) MMFinderLiveRedPacketAnchorPromoteInfo *redPacketPromoteInfo;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutRedPacketImgView;
- (void)layoutTitleLabel;
- (void)layoutDescriptionLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
