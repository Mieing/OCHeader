@class NSString, WAJSContextPluginDelegateCenter;
@protocol WAJSServicePluginContextProtocol;

@interface WAJSContextPluginBase : MMObject <IWAJSContextPluginProtocol>

@property (retain, nonatomic) WAJSContextPluginDelegateCenter *delegateCenter;
@property (weak, nonatomic) id<WAJSServicePluginContextProtocol> serviceContext;
@property (readonly, weak, nonatomic) id<WAJSServicePluginContextProtocol> context;
@property (nonatomic) unsigned long long runningState;
@property (nonatomic) unsigned long long taskRunningState;
@property (nonatomic) BOOL usingLocation;
@property (nonatomic) BOOL usingLocationBackground;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL usingBluetoothBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setDelegateCenterProtocol:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)setJSContextOwner:(id)a0;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (id)getAppID;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (void)pluginDidCreated;
- (void).cxx_destruct;

@end
