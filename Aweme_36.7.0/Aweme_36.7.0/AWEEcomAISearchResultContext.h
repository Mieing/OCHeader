@class NSDictionary, NSString;

@interface AWEEcomAISearchResultContext : NSObject

@property (copy, nonatomic) NSDictionary *routeParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSDictionary *productInfo;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (copy, nonatomic) NSString *preGeneralSearchId;

- (void)setupWithRouteParams:(id)a0;
- (id)initWithRouteParams:(id)a0;
- (void).cxx_destruct;

@end
