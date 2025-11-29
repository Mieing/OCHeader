@interface QQOpenApiUtility : NSObject

+ (id)safeUrlBase64Encode:(id)a0;
+ (id)UTF8StringWithBase64String:(id)a0;
+ (id)dataWithBase64EncodedString:(id)a0;
+ (int)openURL:(id)a0 timURL:(id)a1 completionHandler:(id /* block */)a2;
+ (id)base64EncodedStringWithData:(id)a0;
+ (int)openUniversallinkIfNeed:(id)a0 completionHandler:(id /* block */)a1;
+ (void)cgiRequestGetSdkConfig:(id)a0;
+ (id)base64EncodedStringWithUTF8String:(id)a0;
+ (id)_encodeUrlWithSdkv:(id)a0;
+ (id)_encodeUrlWithBundleId:(id)a0;
+ (int)openUniversallinkIfNeed:(id)a0 timUrl:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)qqOpenURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)openTimUrl:(id)a0 completionHandler:(id /* block */)a1;
+ (id)safeUrlBase64Decode:(id)a0;
+ (BOOL)canOpenURL:(id)a0;
+ (int)openURL:(id)a0;
+ (int)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
