@interface BDPWebViewComponentInterceptionSettings : NSObject

+ (BOOL)shouldUseTimorSettings;
+ (id)timorInterceptionConfigWithKey:(id)a0;
+ (BOOL)interceptionIsEnabled;
+ (BOOL)postInterceptionIsDisabled;
+ (id)contentTypeDisableList;

@end
