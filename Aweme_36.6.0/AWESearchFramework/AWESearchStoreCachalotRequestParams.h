@class NSDictionary, NSString;

@interface AWESearchStoreCachalotRequestParams : AWESearchResultCachalotRequestParams

@property (copy, nonatomic) NSDictionary *addressDictionary;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *ecomTheme;
@property (copy, nonatomic) NSDictionary *sortParams;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)refreshParams;
- (id)generateParams;
- (void).cxx_destruct;

@end
