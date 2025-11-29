@class NSString, NSDictionary, AWEChallengeModel, NSError;

@interface AWEChallengeDetailHeaderSectionViewModel : AWEBaseListSectionViewModel

@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *enterFromPageString;
@property (copy, nonatomic) NSDictionary *searchLogPassback;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) unsigned long long halfScreenStyle;
@property (nonatomic, getter=isRequestFavoriteOnAir) BOOL requestFavoriteOnAir;
@property (retain, nonatomic) NSError *collectionError;
@property (nonatomic) unsigned long long showFavoriteBubbleAction;
@property (retain, nonatomic) NSString *challengeName;
@property (nonatomic) BOOL isNewLayoutUI;
@property (nonatomic) BOOL isCommonChallenge;
@property (copy, nonatomic) NSString *trackParams;
@property (readonly, nonatomic) AWEChallengeModel *challengeModel;

- (BOOL)checkNetworkConnected;
- (void)onFavoriteButtonClicked:(id)a0;
- (BOOL)canCollection;
- (void)startCollecting:(BOOL)a0;
- (void)trackBannerViewShow;
- (void)trackOwnerNameDidTap;
- (void)trackGoButtonDidTap;
- (void)trackBannerViewDidTap;
- (void)trackDidTapFavoriteHintBubble;
- (void)trackVideoCardDidClickAtIndex:(long long)a0;
- (void)trackCollectionButtonDidTap:(BOOL)a0;
- (void)processCollectionBubbleWithActionType:(long long)a0 isHeaderFavoriteButton:(BOOL)a1;
- (void)trackAvatarDidTap;
- (void).cxx_destruct;

@end
