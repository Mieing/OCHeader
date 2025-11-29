@class MMFinderLiveRecentRewardUserItem, MMFinderLiveTask, MMFinderLiveMemberSignView, MMFinderLiveGlobalRankSignView, NSMutableArray, UIView, MMUIImageView, NSString, WCFinderHeadImageView, MMCPLabel, MMFinderLiveRecentRewardGiftsView, MMFinderLiveFansGroupSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView;
@protocol MMFinderLiveRecentRewardCollectionCellDelegate;

@interface MMFinderLiveRecentRewardCollectionCell : UICollectionViewCell <MMFinderLiveRecentRewardGiftsViewDelegate>

@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveMemberSignView *memberSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView;
@property (retain, nonatomic) MMFinderLiveRecentRewardGiftsView *recentRewardGiftsView;
@property (nonatomic) unsigned int visibleBadgeCount;
@property (retain, nonatomic) NSMutableArray *giftItemsViews;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) MMFinderLiveRecentRewardUserItem *recentRewardUserItem;
@property (retain, nonatomic) MMUIImageView *roleIconImageView;
@property (retain, nonatomic) MMUIImageView *genderIconImageView;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (weak, nonatomic) id<MMFinderLiveRecentRewardCollectionCellDelegate> cellDelegate;
@property (nonatomic) BOOL needSeparatorLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initHeadImageView;
- (void)initNameLabel;
- (void)initGlobalRankSignView;
- (void)initMysteriousSignView;
- (void)initMemberSignView;
- (void)initFansGroupSignView;
- (void)initBuySignView;
- (void)initFrequentWatchSignView;
- (void)initFollowerSignView;
- (void)initRecentRewardGiftsView;
- (void)initSeperatorLine;
- (void)initRoleIconImageView;
- (void)initGenderIconImageView;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isMysterious;
- (void)updateWithRecentRewardUserItem:(id)a0;
- (void)onClickLastOneItem;
- (double)calculateGiftsViewLength;
- (double)calculateOriginalTotalLength;
- (double)calculateFoldUserNameTotalLength;
- (id)getMinimumUsername:(id)a0;
- (void)updateMysteriousSignView;
- (void)updateGlobalRankSignView;
- (void)updateMemberSignView;
- (void)updateFansGroupSignView;
- (void)updateBuySignView;
- (void)updateFrequentWatchSignView;
- (void)updateFollowerSignView;
- (double)getGlobalRankSignWidth;
- (double)getMemberSignWidth;
- (double)getFansGroupSignWidth;
- (double)getBuySignWidth;
- (double)getFollowerSignWidth;
- (double)getFrequentWatchSignWidth;
- (void)updateGenderImageView;
- (double)genderIconImageViewWidth;
- (double)roleIconImageWidth;
- (id)getFansGroupName;
- (void).cxx_destruct;

@end
