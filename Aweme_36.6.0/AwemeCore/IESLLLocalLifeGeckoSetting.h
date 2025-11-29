@interface IESLLLocalLifeGeckoSetting : NSObject

+ (BOOL)enableDefaultPreload;
+ (id)localLifePrefetchConfig;
+ (id)codeStartPrefetchConfig;
+ (id)prefetchLynxSetting;
+ (id)geckoSettings;

@end
