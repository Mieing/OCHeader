@class NSString, NSDictionary, NSArray, AWEDCFeedDataDuplicateFilterConfig, AWEListDataController;
@protocol AWEDCFeedDataControllerProtocol;

@interface AWEDCFeedDataConfig : AWEDCFeedBaseConfig

@property (nonatomic) unsigned long long dataLoadTiming;
@property (nonatomic) unsigned long long dataStyle;
@property (nonatomic) BOOL validByResponseData;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *requestMethod;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *requestBodyParams;
@property (nonatomic) BOOL enableCommonParams;
@property (retain, nonatomic) AWEDCFeedDataDuplicateFilterConfig *duplicateFilterConfig;
@property (copy, nonatomic) NSArray *dataProcessors;
@property (copy, nonatomic) NSString *prfPageLoadURLPath;
@property (retain, nonatomic) id<AWEDCFeedDataControllerProtocol> dcFeedDataController;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) AWEListDataController *innerDataController;
@property (copy, nonatomic) id /* block */ innerDataControllerConfigBlock;
@property (copy, nonatomic) id /* block */ sectionViewModelActionAfterFetch;
@property (copy, nonatomic) id /* block */ canRefreshConfigBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
