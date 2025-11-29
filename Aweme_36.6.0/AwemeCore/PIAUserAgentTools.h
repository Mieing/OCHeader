@interface PIAUserAgentTools : NSObject

+ (id)defaultWebViewUserAgentString;
+ (id)getOriginWebViewUserAgentString;
+ (id)getAppNameAndVersionString;
+ (id)defaultWorkerUserAgentString;
+ (id)getWebViewDefaultUserAgent;
+ (id)getWorkerDefaultUserAgent;

@end
