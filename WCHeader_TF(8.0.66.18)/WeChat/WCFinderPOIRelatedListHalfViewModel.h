@class NSString, NSMutableArray, NSData;
@protocol WCFinderPOIRelatedListHalfViewModelDelegate;

@interface WCFinderPOIRelatedListHalfViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *allPOIDatas;
@property (nonatomic) BOOL isSearchModel;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL isContinueFlag;
@property (weak, nonatomic) id<WCFinderPOIRelatedListHalfViewModelDelegate> delegate;

- (id)initWithFinderUserName:(id)a0;
- (id)snsPOIDetailAtIndex:(long long)a0;
- (long long)numberOfRows;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (BOOL)isEnableFetchNextPageData;
- (BOOL)isDataEmpty;
- (void)fetchAction:(id)a0;
- (void)onBeginSearch;
- (void)onSearchAction:(id)a0;
- (void)onSearchCancel;
- (void).cxx_destruct;

@end
