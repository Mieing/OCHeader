@class NSString, WCFinderFeedArray, WCFinderStreamLoadingState;

@interface WCFinderMemberShipDiscussionPage : NSObject <WCFinderFeedArrayDelegate>

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) int cgiType;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderStreamLoadingState *state;
@property (copy, nonatomic) id /* block */ postingFeedFetcher;
@property (copy, nonatomic) id /* block */ cacheFeedFetcher;
@property (copy, nonatomic) NSString *redirectFeedID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *highLightQAFeedId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommentScene:(int)a0;
- (void)requestCacheData;
- (void)requestFirstPageData;
- (id)updateSnapshot;
- (void)requestNextPageData;
- (void)requestSearchPageData:(unsigned long long)a0;
- (id)mergePostingFeedTo:(id)a0 firstPage:(BOOL)a1;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (void).cxx_destruct;

@end
