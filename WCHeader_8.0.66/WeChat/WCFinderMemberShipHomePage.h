@class NSString, WCFinderFeedArray, WCFinderStreamLoadingState;

@interface WCFinderMemberShipHomePage : NSObject <WCFinderFeedArrayDelegate>

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL seeAuthorOnly;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderStreamLoadingState *state;
@property (copy, nonatomic) id /* block */ postingFeedFetcher;
@property (copy, nonatomic) id /* block */ cacheFeedFetcher;
@property (copy, nonatomic) NSString *redirectFeedID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(int)a0;
- (void)requestCacheData;
- (void)requestFirstPageData;
- (id)updateSnapshot;
- (void)requestNextPageData;
- (id)mergePostingFeedTo:(id)a0 firstPage:(BOOL)a1;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (void).cxx_destruct;

@end
