@interface AWENewsAISmartABConfig : NSObject

+ (BOOL)enablePreloadImage;
+ (BOOL)resolveNewsAiSmartInsertCrash;
+ (id)mainTabConfig;
+ (id)containerUIConfig;
+ (id)trackDetailUIConfig;
+ (id)discoverTabTitle;
+ (id)trackTabTitle;
+ (long long)tabIndexWithTitle:(id)a0;
+ (id)containerBackgroundURLs;
+ (id)trackDetailBackgroundURLs;
+ (BOOL)enableAINewsPersonalRecomWithDup;
+ (BOOL)enableAINewsLynxCardPreCreate;
+ (BOOL)enableAINewsLynxCardPreCreateCount;
+ (BOOL)enableUpdateHeightWithDislike;
+ (id)headerTitle;

@end
