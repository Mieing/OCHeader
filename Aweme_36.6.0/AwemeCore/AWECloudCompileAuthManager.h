@interface AWECloudCompileAuthManager : NSObject

+ (id)cloudCompileAuthInfoKey;
+ (BOOL)authInfoIsValid:(id)a0;
+ (void)getAuthInfoWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
+ (id)sharedManager;

@end
