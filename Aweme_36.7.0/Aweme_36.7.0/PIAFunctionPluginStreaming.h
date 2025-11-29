@class NSString;

@interface PIAFunctionPluginStreaming : NSObject <PIAFunctionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;

- (void)onNavigationCommit:(id)a0;
- (void)willFetchManifestWithContext:(id)a0;

@end
