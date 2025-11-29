@interface ACCGenericTemplateServiceFactory : NSObject

+ (void)injectParams;
+ (id)buildService;
+ (id)buildRecommendService;
+ (id)networkType;

@end
