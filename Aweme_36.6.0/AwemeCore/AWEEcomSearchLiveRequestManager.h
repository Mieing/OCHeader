@class NSDate, NSString, NSArray, AWESearchGlobalDoodleConfigModel, NSDictionary, UIViewController, NSNumber, AWEDoubleColumnSearchMerchandiseResponse;
@protocol AWEHttpTask;

@interface AWEEcomSearchLiveRequestManager : NSObject

@property (weak, nonatomic) id<AWEHttpTask> requestTask;
@property (retain, nonatomic) NSNumber *searchCursor;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (copy, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (nonatomic) BOOL searchHasMoreResult;
@property (copy, nonatomic) NSArray *rawSearchResults;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseResponse *model;
@property (copy, nonatomic) NSArray *searchResults;
@property (weak, nonatomic) UIViewController *rawViewController;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *changeChannel;
@property (copy, nonatomic) NSString *changeEnterFrom;
@property (nonatomic) BOOL isNeedChangeSearchRequest;
@property (nonatomic) BOOL needChangeSearchId;
@property (nonatomic) BOOL needChangeChannel;
@property (copy, nonatomic) NSString *changeSearchId;
@property (copy, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *currentPage;
@property (copy, nonatomic) NSDictionary *contentParams;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *ecomSearchId;
@property (copy, nonatomic) NSDictionary *clientEngineExtra;
@property (nonatomic) BOOL isFromECommerce;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSDictionary *addressDictionary;

- (void)handleResponse:(id)a0 error:(id)a1 keyword:(id)a2 isLoadmore:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_handleRefreshServerTimeCost:(id)a0;
- (void)loadMoreWithQueryParams:(id)a0 completion:(id /* block */)a1;
- (void)searchKeyword:(id)a0 queryParams:(id)a1 cursor:(id)a2 count:(id)a3 searchId:(id)a4 requestDate:(id)a5 isLoadmore:(BOOL)a6 enterMethod:(id)a7 completion:(id /* block */)a8;
- (void)searchKeyword:(id)a0 queryParams:(id)a1 enterMethod:(id)a2 cursor:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
