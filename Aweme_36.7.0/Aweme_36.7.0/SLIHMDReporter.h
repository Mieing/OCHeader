@interface SLIHMDReporter : NSObject

+ (void)increaseContainerViewCount;
+ (void)decreaseContainerViewCount;
+ (void)recordLastTemplateLoadInfo:(id)a0;
+ (void)increaseInstanceCount;
+ (void)decreaseInstanceCount;
+ (void)recordInstanceCount;
+ (void)recordContainerViewCount;
+ (void)initialize;

@end
