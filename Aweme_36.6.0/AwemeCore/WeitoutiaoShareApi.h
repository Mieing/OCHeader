@interface WeitoutiaoShareApi : NSObject

+ (id)getApiVersion;
+ (BOOL)isEmptyString:(id)a0;
+ (BOOL)handleOpenURL:(id)a0 delegate:(id)a1;
+ (BOOL)isToutiaoAppSupportApi;
+ (BOOL)registerApp:(id)a0 source:(id)a1;
+ (id)paramsWithURLString:(id)a0;
+ (id)responseParams:(id)a0;
+ (BOOL)isToutiaoAppInstalled;
+ (id)schemaWithRequest:(id)a0;
+ (id)sdkParamsWithRequest:(id)a0;
+ (id)queryParamsWithRequest:(id)a0;
+ (id)encodedWithString:(id)a0;
+ (id)decodeWithEncodedURLString:(id)a0;
+ (void)saveParamsToPasteboard:(id)a0;
+ (int)sendRequest:(id)a0;

@end
