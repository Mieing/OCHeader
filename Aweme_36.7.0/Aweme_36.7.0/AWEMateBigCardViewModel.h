@class AWEUserRecommendBigCardDataSource, NSString, AWEUserRecommendBigCardModel, AWEUserRecommendCardTrackManager, AWESocialRelationObserver, AWEAwemeModel, NSDictionary;

@interface AWEMateBigCardViewModel : NSObject <AWEUserMessage, AWEUserRecommendBigCardDataSourceMessage>

@property (retain, nonatomic) AWEUserRecommendBigCardModel *currentModel;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *dataSource;
@property (retain, nonatomic) AWEUserRecommendCardTrackManager *tracker;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (nonatomic) long long impressionReportScene;
@property (nonatomic) long long dislikeReportScene;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) double autoReplaceDelay;
@property (nonatomic) BOOL hasImpression;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) long long feedType;
@property (copy, nonatomic) NSDictionary *businessInfo;
@property (nonatomic) BOOL canShowSlideUpHint;
@property (copy, nonatomic) id /* block */ didFetchItemListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)follow;
- (void)preparePrivacyUser:(id)a0 filterBlock:(id /* block */)a1;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)updateMateState:(id)a0;
- (void)showMateApplicationAlert;
- (id)defaultBackgroundImageURL;
- (id)profileViewControllerWithEnterMethod:(id)a0;
- (void)dataSource:(id)a0 didImpressModel:(id)a1;
- (void)dataSource:(id)a0 didInsertedModel:(id)a1;
- (void)dataSource:(id)a0 didDislikeModel:(id)a1;
- (void)impressCurrentModel;
- (void)replaceCurrentModel;
- (BOOL)isIllegalRecommendReason:(id)a0;
- (void)transferToProfileWithEnterMethod:(id)a0;
- (void)replaceCurrentModel:(BOOL)a0;
- (BOOL)shouldNotShowUser:(id)a0;
- (BOOL)shouldFilterUser:(id)a0;
- (void)p_removeFromFeed;
- (void)p_showNoMoreUserToast;
- (long long)triggerLoadmoreCount;
- (void)trackFriendCardWithEventType:(id)a0;
- (void)trackFollowCardWithEventType:(id)a0;
- (id)userDuplicateManager;
- (void)p_mateReportRate:(long long)a0;
- (void)p_replaceModelAfterApplyMate:(id)a0;
- (void)filterFollowRequest:(id)a0;
- (BOOL)enableFilterMateRequest;
- (BOOL)p_shouldReplaceModelWithFeedType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)a0;
- (void)dislike;
- (void)dealloc;

@end
