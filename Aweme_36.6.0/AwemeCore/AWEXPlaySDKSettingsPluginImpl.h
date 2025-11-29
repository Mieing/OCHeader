@class NSString;

@interface AWEXPlaySDKSettingsPluginImpl : NSObject <XPlaySDKSettingsPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;

- (id)xplay_objectForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;

@end
