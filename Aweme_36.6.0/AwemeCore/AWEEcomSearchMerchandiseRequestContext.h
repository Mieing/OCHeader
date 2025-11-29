@class NSString, NSDictionary;

@interface AWEEcomSearchMerchandiseRequestContext : NSObject

@property (copy, nonatomic) NSString *guideSearchWord;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) BOOL isPullToRefresh;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL ignoreFormat;
@property (copy, nonatomic) id /* block */ fetchCompletion;
@property (copy, nonatomic) NSDictionary *monitorParams;

- (void).cxx_destruct;

@end
