@class NSString;

@interface AWESecurityPluginsAdapterBootTask : NSObject <IESSecuritySecLinkSettings, HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)errorOverwhelmingCount;
+ (long long)errorOverwhelmingDuration;
+ (long long)safeDuraionAfterOverWhelming;
+ (long long)syncCheckTimeLimit;
+ (id)autoSeclinkBaseUrl;
+ (id)webViewConfig;
+ (void)forceWebHttps;
+ (void)execute;


@end
