@class AWEAwemeModel, NSString, NSArray, AWESocialRelationObserver, AWEUserRecommendCardTrackManager, NSMutableArray, AWEUserRecommendBigCardDataSource, NSMutableIndexSet;

@interface AWEFindFriendsMultiCardViewModel : NSObject <AWEUserMessage, AWEAwemeDetailTableViewControllerDelegate, AWEUserRecommendBigCardDataSourceMessage>

@property (nonatomic) unsigned long long maxVisibleModelCount;
@property (copy, nonatomic) NSArray *visibleModels;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *cardDataSource;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (retain, nonatomic) AWEUserRecommendCardTrackManager *cardTrackManager;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableIndexSet *unfollowedUsersIndexes;
@property (retain, nonatomic) NSMutableIndexSet *removedUsersIndexes;
@property (nonatomic) long long impressionReportScene;
@property (nonatomic) long long dislikeReportScene;
@property (retain, nonatomic) NSMutableArray *mateImpressionIDsToReport;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) double autoReplaceDelay;
@property (nonatomic) BOOL hasImpression;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL canShowSlideUpHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)observeMateSate;
- (void)updateMateState:(id)a0;
- (id)defaultBackgroundImageURL;
- (void)dataSource:(id)a0 didImpressModel:(id)a1;
- (void)dataSource:(id)a0 didInsertedModel:(id)a1;
- (void)replaceUsersAtIndexes:(id)a0;
- (void)impressCurrentModel;
- (unsigned long long)remainingModelCountToTriggerLoadMore;
- (void)updateVisibleModels;
- (void)p_mateReportRate:(long long)a0 idList:(id)a1;
- (id)generateRelationContext:(id)a0;
- (BOOL)enableReplaceAllCards;
- (void)removeFromFeed;
- (void)transferToProfileWithUser:(id)a0 enterMethod:(id)a1;
- (void)dislikeUserAtIndex:(unsigned long long)a0;
- (void)showMateApply:(id)a0;
- (void)replaceAllCardsWithToast:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;
- (unsigned long long)remainingCount;
- (void)removeUserWithUserID:(id)a0;

@end
