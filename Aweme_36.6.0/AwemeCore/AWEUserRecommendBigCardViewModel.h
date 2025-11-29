@class AWEUserRecommendBigCardDataSource, NSString, AWEUserRecommendBigCardModel, AWEUserRecommendCardTrackManager, AWEAwemeModel;

@interface AWEUserRecommendBigCardViewModel : NSObject <AWEAwemeDetailTableViewControllerDelegate, AWEUserMessage, AWEUserRecommendBigCardDataSourceMessage, AWEUserRecommendBigCardMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEUserRecommendBigCardModel *currentModel;
@property (retain, nonatomic) AWEUserRecommendBigCardModel *modelToPreload;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *dataSource;
@property (nonatomic) BOOL hasShownSlideUpHint;
@property (copy, nonatomic) NSString *oldCardType;
@property (nonatomic) long long oldTransitionedPrePageType;
@property (nonatomic) long long oldFromPageType;
@property (nonatomic) long long oldPrePageType;
@property (nonatomic) double showTimeForEachImpression;
@property (nonatomic) BOOL hasAction;
@property (retain, nonatomic) AWEUserRecommendCardTrackManager *tracker;
@property (nonatomic) unsigned long long remainingModelCountToTriggerLoadMore;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) double autoReplaceDelay;
@property (nonatomic) BOOL finishedSlideUpHintAnimation;
@property (nonatomic) BOOL isDisplayingForTrack;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL hasImpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)preparePrivacyUser:(id)a0 filterBlock:(id /* block */)a1;
- (void)transferToPrivacyReminderPage;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_onPersonalRecommendChanged:(id)a0;
- (void)followWithCompletion:(id /* block */)a0;
- (id)defaultBackgroundImageURL;
- (void)dislikeWithType:(long long)a0;
- (void)trackFollowCardFinishWithEventType:(id)a0;
- (void)resetImpressionStatus;
- (id)profileViewControllerWithEnterMethod:(id)a0;
- (void)didEnterProfileWithEnterMethod:(id)a0;
- (void)dataSource:(id)a0 didImpressModel:(id)a1;
- (void)dataSource:(id)a0 didInsertedModel:(id)a1;
- (void)impressCurrentModel;
- (BOOL)canShowSlideUpHint;
- (void)replaceCurrentModel;
- (BOOL)isIllegalRecommendReason:(id)a0;
- (void)transferToProfileWithEnterMethod:(id)a0;
- (void)p_removeFromFeed;
- (void)impressionSlideUpHint;
- (void)transferToAwemeDetailAtIndex:(unsigned long long)a0;
- (void)unfollowWithCompletion:(id /* block */)a0;
- (void)bigCardViewModel:(id)a0 didDislikeModel:(id)a1 dislikeType:(long long)a2;
- (void)p_updateCardType:(id)a0;
- (void)p_replaceModelAfterFollowUser:(id)a0;
- (void)p_syncUser:(id)a0 toAweme:(id)a1;
- (id)p_recommendExplanationUrl;
- (id)p_slideUpHintShowCountStorageKey;
- (void)p_syncUser:(id)a0 toUser:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;
- (unsigned long long)remainingCount;

@end
