@class NSString, BDPLynxCardModel, UIView, BDPUniqueID, LynxView;
@protocol AnnieXContainerBaseProtocol, BDPLynxCardStateDelegate;

@interface BDPLynxCardComponent : NSObject <AnnieXDataProviderProtocol, BDXContainerLifecycleProtocol, BDPLynxNativeAppPublishMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXView;
@property (weak, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) BDPLynxCardModel *model;
@property (weak, nonatomic) id<BDPLynxCardStateDelegate> stateDelegate;
@property (retain, nonatomic) NSString *containerId;
@property (nonatomic) BOOL isSubscribeReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)pageDidAppear;
- (void)appEnterForeground;
- (void)pageDidDisAppear;
- (id)bdp_annieXViewCreate;
- (void)setUpAnnieViewPage;
- (void)subscribeDirectlyToLynx:(id)a0 data:(id)a1;
- (id)initWithModel:(id)a0 uniqueID:(id)a1 stateDelegate:(id)a2;
- (void)onLynxMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)dealloc;

@end
