@class NSString;

@interface AWEXPlayABTestPluginImpl : NSObject <XPlayABTestPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;

- (id)xplay_getExperimentValueForKey:(id)a0 withExposure:(BOOL)a1;
- (id)xplay_getExperimentVidForKey:(id)a0;

@end
