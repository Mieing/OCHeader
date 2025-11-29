@class NSString, NSMutableSet;
@protocol HTSLiveNetworkStatusActions;

@interface IESLiveStreamPlayerNetworkStatusPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerNetworkStatusPluginProtocol>

@property (retain, nonatomic) NSMutableSet *observerSet;
@property (retain, nonatomic) id<HTSLiveNetworkStatusActions> networkDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)onNetworkStatusChanged:(id)a0;
- (void)pe_bizHostDealloc;
- (void)pe_commonInit;
- (void)addNetWorkObserver;
- (void)removeNetWorkObserver;
- (void).cxx_destruct;
- (id)init;

@end
