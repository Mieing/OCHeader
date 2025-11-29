@class NSDictionary, NSString;

@interface DitoGeneralContainerRouter : NSObject

@property (copy, nonatomic) NSDictionary *sourceData;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL legitimate;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSDictionary *generalParams;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *utParams;

- (id)initWithScene:(id)a0 routerParams:(id)a1;
- (void)parseRouterParams;
- (void).cxx_destruct;
- (id)update:(id)a0;

@end
