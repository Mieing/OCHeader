@interface AWEPublishExceptionUtils : NSObject

+ (id)defaultConfigs;
+ (id)experimentConfigWithType:(id)a0;
+ (BOOL)isSubsetDict:(id)a0 parentDict:(id)a1;
+ (void)alertWithType:(id)a0 params:(id)a1;
+ (void)trackEventWithType:(id)a0 publishModel:(id)a1 params:(id)a2;
+ (void)uploadThreadInfosWithType:(id)a0 params:(id)a1;
+ (void)uploadAlogWithType:(id)a0 params:(id)a1;

@end
