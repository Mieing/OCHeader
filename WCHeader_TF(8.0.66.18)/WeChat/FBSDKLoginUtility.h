@interface FBSDKLoginUtility : NSObject

+ (id)stringForAudience:(unsigned long long)a0;
+ (id)queryParamsFromLoginURL:(id)a0;
+ (id)userIDFromSignedRequest:(id)a0;

@end
