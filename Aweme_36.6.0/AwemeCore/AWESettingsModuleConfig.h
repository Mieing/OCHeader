@class NSString;

@interface AWESettingsModuleConfig : HTSService <AWESettingsModuleConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)openRepost;
+ (BOOL)generalSearchWaterfallLayoutEnabled;
+ (BOOL)enablePrivateAccount;
+ (BOOL)forbidDownloadLocal;
+ (BOOL)enableTrending;


@end
