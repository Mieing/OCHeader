@interface BDPUserAgent : NSObject

+ (id)defaultUserAgentString;
+ (id)getAppNameAndVersionString;
+ (void)setUADelegate:(id)a0;
+ (id)getDefaultUserAgent;
+ (id)defaultUserAgentAfterFilter:(id)a0;

@end
