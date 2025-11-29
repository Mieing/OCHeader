@class NSString;

@interface IESLiveStreamPlayerCallCenterPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerCallCenterPluginProtocol>

@property (copy, nonatomic) id /* block */ callEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)pe_bizHostDidInit;
- (void)pe_bizHostDealloc;
- (void)registerCallCenter;
- (void)unregisterCallCenter;
- (void).cxx_destruct;

@end
