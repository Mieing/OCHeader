@class NSDictionary;

@interface AWESearchSeedResultRequestParams : AWESearchVerticalRequestParams

@property (retain, nonatomic) NSDictionary *currFilterExtraParams;
@property (retain, nonatomic) NSDictionary *fetchExtraParams;
@property (retain, nonatomic) NSDictionary *refreshExtraParams;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (void).cxx_destruct;

@end
