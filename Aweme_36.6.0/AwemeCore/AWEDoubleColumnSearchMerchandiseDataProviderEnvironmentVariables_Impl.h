@class NSString, NSDictionary, NSDate, NSNumber, AWEEcomSearchResultConfig;

@interface AWEDoubleColumnSearchMerchandiseDataProviderEnvironmentVariables_Impl : NSObject <AWEDoubleColumnSearchMerchandiseDataProviderEnvironmentVariables>

@property (retain, nonatomic) NSString *lastGuideSearchWord;
@property (retain, nonatomic) NSString *initialSearchSource;
@property (retain, nonatomic) NSString *keyWord;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (nonatomic) long long shownCount;
@property (nonatomic) BOOL searchHasResult;
@property (retain, nonatomic) NSNumber *searchCursor;
@property (nonatomic) BOOL searchHasMore;
@property (copy, nonatomic) NSString *searchCellLevel;
@property (retain, nonatomic) NSNumber *searchCellRank;
@property (nonatomic) long long natureResultsCount;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *currentFormat;
@property (readonly, nonatomic) unsigned long long columnType;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) BOOL isFromSaas;
@property (retain, nonatomic) AWEEcomSearchResultConfig *resultConfig;
@property (copy, nonatomic) id /* block */ loginBlock;
@property (copy, nonatomic) NSDictionary *bcmPassThroughParams;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *entranceTab;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSDictionary *clientEngineExtra;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isFromSugGuideSearch;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (nonatomic) BOOL isSwitchTab;
@property (nonatomic) BOOL shouldHideCorrection;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *ecomScene;
@property (copy, nonatomic) NSString *targetTab;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *originalSearchID;
@property (retain, nonatomic) NSString *originalFormat;
@property (retain, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *bcmKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
