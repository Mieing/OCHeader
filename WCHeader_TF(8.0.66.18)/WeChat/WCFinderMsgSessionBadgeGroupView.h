@class MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, WCFinderMsgSessionBadgeLabel, WCFinderMsgSessionUserTagLabel, MMFinderLiveNormalTextSignView;

@interface WCFinderMsgSessionBadgeGroupView : MMUIView

@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *rankSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView;
@property (retain, nonatomic) WCFinderMsgSessionBadgeLabel *badgeLabel;
@property (retain, nonatomic) WCFinderMsgSessionUserTagLabel *userTagLabel;

- (id)init;
- (void)setupObserver;
- (void)updateRankSignViewModel:(id)a0;
- (void)updateSignUIStateInfo:(id)a0 hasFollowMe:(BOOL)a1 followMyMembership:(BOOL)a2;
- (void)updateBadgeLabelViewModel:(id)a0;
- (void)updateBuyBadgeInfo:(id)a0;
- (void)updateFrequentWatchBadgeInfo:(id)a0;
- (void)updateFollowerBadgeInfo:(id)a0;
- (void)flexLayoutSubviews;
- (void).cxx_destruct;

@end
