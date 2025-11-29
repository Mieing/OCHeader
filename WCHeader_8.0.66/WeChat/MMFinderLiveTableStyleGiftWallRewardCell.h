@class MMFinderLiveGameEsportSignView, MMFinderLiveFansGroupSignView, NSMutableArray, MMWebImageView, MMFinderLiveLiveRoleSignView, MMFinderLiveGlobalRankSignView;

@interface MMFinderLiveTableStyleGiftWallRewardCell : MMFinderLiveTableStyleCommentPubbleSignTextCell

@property (nonatomic) unsigned long long badgeSignCnt;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMFinderLiveGameEsportSignView *gameEsportSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (retain, nonatomic) MMWebImageView *giftImageView;
@property (retain, nonatomic) NSMutableArray *signViewArraryForLayout;

- (id)signText;
- (BOOL)isUITypeValid;
- (BOOL)reuseWithCellFrame:(id)a0;
- (void)layoutUI;
- (void)layoutSignLabel;
- (void)updateSignViewOrigins;
- (void)layoutMysteriousSignView;
- (void)layoutGlobalRankSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)updateCommentLabelOrigin;
- (void)layoutGiftImageView;
- (void)updateGiftImageViewOrigin;
- (id)getSelfAccessibility;
- (void).cxx_destruct;

@end
