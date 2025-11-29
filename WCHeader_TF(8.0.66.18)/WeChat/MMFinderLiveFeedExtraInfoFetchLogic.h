@class MMTimer, NSString, FinderLiveStreamGetAsyncLoadInfoConfig, MMFinderLiveFeedExtraInfoFetcher;

@interface MMFinderLiveFeedExtraInfoFetchLogic : NSObject <MMFinderLiveFeedExtraInfoFetcherDelegate>

@property (retain, nonatomic) MMFinderLiveFeedExtraInfoFetcher *fetcher;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) MMTimer *timer;
@property (readonly, nonatomic) int commentScene;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig;
@property (copy, nonatomic) id /* block */ refreshItemsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommentScene:(int)a0;
- (void)dealloc;
- (BOOL)enable;
- (long long)timerInterval;
- (void)start;
- (void)stop;
- (void)triggeFetch;
- (void)internalFetch;
- (void)onFeedHighlightTagUpdate:(unsigned long long)a0 tag:(id)a1;
- (void)onFeedExtraInfoFetchConfigUpdate;
- (void)onFeedAggregationCardUpdate:(id)a0 card:(id)a1;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)a0 previewInfo:(id)a1;
- (void)onFeedLiveMsgRoomInfoUpdate:(unsigned long long)a0 roomMsgInfo:(id)a1;
- (void)onFeedInteractionCardUpdate:(unsigned int)a0 content:(id)a1;
- (void).cxx_destruct;

@end
