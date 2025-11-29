@class NSString, NSDictionary;

@interface AWESearchGroupBuyRequestParams : AWESearchLifeServiceBaseRequestParams

@property (nonatomic) BOOL hasSearched;
@property (nonatomic) BOOL isLifeService;
@property (copy, nonatomic) NSString *strCityCode;
@property (copy, nonatomic) NSDictionary *listFilterParams;
@property (nonatomic) BOOL reserveDeliveryFilter;
@property (copy, nonatomic) NSDictionary *citySelectionFilterParams;
@property (nonatomic) BOOL shouldClearCitySelectionFilterParamsAfterGenerateParams;
@property (nonatomic) BOOL shouldForceDisablePredict;
@property (nonatomic) BOOL shouldStoreHistory;
@property (copy, nonatomic) NSString *strTargetPOIID;
@property (nonatomic) BOOL isExecuteEmptyQuerySearch;
@property (copy, nonatomic) NSString *strLifeChannel;
@property (copy, nonatomic) NSString *strSaleChannel;
@property (nonatomic) BOOL isLife7Page;
@property (nonatomic) BOOL isPartShowStatus;
@property (copy, nonatomic) NSDictionary *clientServerExtra;
@property (copy, nonatomic) NSString *strLifeTheme;
@property (copy, nonatomic) NSDictionary *commonOnceParams;
@property (copy, nonatomic) NSDictionary *commonPassWithFilterParams;
@property (copy, nonatomic) NSDictionary *commonAllTimeParams;
@property (copy, nonatomic) NSString *backtrace;

- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (void).cxx_destruct;

@end
