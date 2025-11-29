@class NSString;

@interface AWEXPlayTrackerPluginImpl : NSObject <XPlayTrackerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;

- (void)xplay_trackEvent:(id)a0 params:(id)a1;

@end
