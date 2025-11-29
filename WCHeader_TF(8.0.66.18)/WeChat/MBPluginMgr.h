@class NSString, NSMapTable;

@interface MBPluginMgr : MMUserService <MMServiceProtocol, IMBPluginProxy>

@property (retain, nonatomic) NSMapTable *extPluginsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)providePlugin:(id)a0 version:(id)a1;
- (void).cxx_destruct;

@end
