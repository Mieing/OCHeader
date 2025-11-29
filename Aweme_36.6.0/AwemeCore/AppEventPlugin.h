@class NSString;

@interface AppEventPlugin : NSObject <HTSAppEventPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)applicationLifeCycleTask:(id)a0 pluginPosition:(long long)a1;
- (void)applicationExecuteBootTask:(id)a0 pluginPosition:(long long)a1;
- (void)applicationBootLogString:(id)a0;

@end
