@class NSString;

@interface PIAFunctionPluginSSRSnapshot : NSObject <PIAFunctionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;

- (void)context:(id)a0 onResponse:(id)a1 fromCache:(BOOL)a2;
- (void)reload:(id)a0 context:(id)a1;

@end
