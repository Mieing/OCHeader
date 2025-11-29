@class MMFinderLiveShopShelfBulkBuyViewModel, NSString, MMFinderLiveGoodsPromotionReplayButton, MMFinderLiveAnchorBulkBuyCellLeftCardView, MMFinderLiveBulkBuyMembersView, MMFinderLiveTagsLabel, MMFinderLiveGoodsAskedForPromotingView, UILabel, MMUIButton;

@interface MMFinderLiveAnchorBulkBuyCell : MMMultiMenuTableViewCell <MMFinderLiveTagsLabelDelegate, MMFinderLiveBulkBuyMembersViewDelegate>

@property (retain, nonatomic) MMFinderLiveAnchorBulkBuyCellLeftCardView *leftCard;
@property (retain, nonatomic) MMFinderLiveTagsLabel *titleLabel;
@property (retain, nonatomic) UILabel *shopLabel;
@property (retain, nonatomic) MMUIButton *promoteButton;
@property (retain, nonatomic) MMFinderLiveGoodsPromotionReplayButton *replayButton;
@property (retain, nonatomic) MMFinderLiveBulkBuyMembersView *membersView;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) MMFinderLiveGoodsAskedForPromotingView *askedForPromotingView;
@property (retain, nonatomic) MMFinderLiveShopShelfBulkBuyViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addTitleLabel;
- (void)addPromoteButton;
- (void)addTimeLabel;
- (void)addCommentLabel;
- (void)addShopLabel;
- (void)updateWithViewModel:(id)a0;
- (void)addReplayButton;
- (void)updatePromoteButton;
- (void)layoutSubviews;
- (void)layoutButtons;
- (void)onPromoteButtonClicked;
- (void)onMemberClicked:(id)a0;
- (void)onTotalClicked;
- (void)onWebImageGetDifferentSize;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
