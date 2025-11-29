@class NSArray, NSString, NSDictionary;

@interface AWEFeedAdPitayaReRankContext : NSObject

@property (copy, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) NSArray *asyncRequestAds;
@property (copy, nonatomic) NSArray *searchDataSource;
@property (copy, nonatomic) NSArray *cellModelArr;
@property (nonatomic) BOOL sceneChanged;
@property (copy, nonatomic) NSString *satiParamsForPitayaCommerce;
@property (retain, nonatomic) NSDictionary *searchSatiParamsForPitayaCommerce;
@property (nonatomic) long long currentAwemeIndex;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL isScrolling;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL isDoubleColumn;
@property (copy, nonatomic) NSString *asyncRequestURL;
@property (copy, nonatomic) NSDictionary *asyncRequestParams;
@property (copy, nonatomic) NSString *asyncRequestModelClass;

- (void).cxx_destruct;

@end
