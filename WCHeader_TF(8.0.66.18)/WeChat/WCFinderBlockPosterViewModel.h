@class NSArray, NSString, NSData, NSMutableArray;
@protocol WCFinderAuthorityListViewModelSearchDelegate, WCFinderAuthorityListViewModelDelegate;

@interface WCFinderBlockPosterViewModel : NSObject <WCFinderContactCommonExt, WCFinderAuthorityListViewModelProtocol>

@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSArray *searchResults;
@property (nonatomic) BOOL searchContinueFlag;
@property (retain, nonatomic) NSData *searchBuff;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (copy, nonatomic) NSString *lastSearchReqeustId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderAuthorityListViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;

- (id)init;
- (void)requestLoadFirstPageData;
- (void)requestLoadNextPageData;
- (void)requestLoadNextPageData:(BOOL)a0;
- (void)batchConfigAddItems:(id)a0 delItems:(id)a1;
- (void)searchWithKeyword:(id)a0;
- (BOOL)searchResultHasMoreData;
- (void)requestNextSearchPageData;
- (id)guideTips;
- (id)emptyTips;
- (id)titleTips;
- (BOOL)showAddContactButton;
- (BOOL)showSearchBar;
- (BOOL)hasMoreData;
- (void)onFinderContactShieldFeedChanged:(id)a0;
- (BOOL)isDataEmpty;
- (double)fixDisplayOffsetY;
- (void).cxx_destruct;

@end
