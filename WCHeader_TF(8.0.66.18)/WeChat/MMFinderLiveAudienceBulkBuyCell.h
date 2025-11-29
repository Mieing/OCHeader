@class MMFinderLiveProductButton, MMFinderLiveGoodsPromotionReplayFloatView, MMWebImageView, MMFinderLiveProductPromotingMaskView, NSString, MMFinderLiveBulkBuyMembersView, MMFinderLiveTagsLabel, MMFinderLiveGoodsSerialNumberView, MMFinderLiveShopShelfBulkBuyViewModel, UILabel;

@interface MMFinderLiveAudienceBulkBuyCell : MMMultiMenuTableViewCell <MMFinderLiveTagsLabelDelegate, MMFinderLiveBulkBuyMembersViewDelegate>

@property (retain, nonatomic) MMFinderLiveShopShelfBulkBuyViewModel *viewModel;
@property (retain, nonatomic) MMWebImageView *mainImageView;
@property (retain, nonatomic) MMFinderLiveGoodsPromotionReplayFloatView *replayFloatView;
@property (retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView;
@property (retain, nonatomic) MMFinderLiveProductPromotingMaskView *promotingView;
@property (retain, nonatomic) MMFinderLiveTagsLabel *titleLabel;
@property (retain, nonatomic) UILabel *shopLabel;
@property (retain, nonatomic) MMFinderLiveBulkBuyMembersView *membersView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) MMFinderLiveProductButton *inviteButton;
@property (retain, nonatomic) MMFinderLiveProductButton *joinButton;
@property (retain, nonatomic) MMFinderLiveProductButton *viewButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addTitleLabel;
- (void)addShopLabel;
- (void)addMainImageView;
- (void)addProgressLabel;
- (void)addReplayFloatView;
- (void)addMembersView;
- (id)addProductButton;
- (void)updateWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)onMemberClicked:(id)a0;
- (void)onTotalClicked;
- (void)onInviteButtonClicked;
- (void)onViewButtonClicked;
- (void)onJoinButtonClicked;
- (void)onWebImageGetDifferentSize;
- (void).cxx_destruct;

@end
