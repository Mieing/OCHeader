@class NSString;

@interface PIAFunctionPluginResourcePreload : NSObject <PIAFunctionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;

- (void)context:(id)a0 onParseManifestDone:(id)a1;
- (void)p_tryToPreloadWithResources:(id)a0 context:(id)a1;

@end
