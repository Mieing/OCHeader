@class FinderLiveStreamGetAsyncLoadInfoConfig, NSMutableDictionary;
@protocol MMFinderLiveFeedExtraInfoFetcherDelegate;

@interface MMFinderLiveFeedExtraInfoFetcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *refreshExtraInfoTsDict;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig;
@property (weak, nonatomic) id<MMFinderLiveFeedExtraInfoFetcherDelegate> delegate;

- (id)initWithCommentScene:(int)a0;
- (void)resetRefreshRecords;
- (void)resetRefreshRecordWithDataItem:(id)a0 forScene:(int)a1;
- (void)reinitRefreshExtraInfoTsDict;
- (BOOL)enableRefreshHighlightTag;
- (BOOL)enableRefreshAggregationCard;
- (BOOL)enableRefreshProductCard;
- (BOOL)enableRefreshEntertainmentCard;
- (BOOL)enableRefreshLiveRoomInfo;
- (BOOL)enableRefreshInteractionCard;
- (id)getUidUnitWithItem:(id)a0;
- (BOOL)refreshFeedExtraInfoIfNeeded:(id)a0 aggregationCardList:(id)a1 productRefreshItems:(id)a2 entertainmentRefreshItems:(id)a3 refreshliveRoomInfoCards:(id)a4 refreshInteractionCardTypes:(id)a5;
- (void)updateAsyncLoadConfigIntervals:(id)a0 requestScenes:(id)a1;
- (void).cxx_destruct;

@end
