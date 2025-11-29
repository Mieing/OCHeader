@class HTSLiveHonorInfo, NSString, BDXBridgeEventSubscriber, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveGameOpenPlatformActivityComponentView : HTSEventForwardingView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (retain, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) HTSLiveHonorInfo *payload;
@property (nonatomic) double height;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) BDXBridgeEventSubscriber *lynxEventSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getContextParams;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)unsubscribeEvent;
- (void)subscribeEvent;
- (void)setupHybridContainer;
- (void)updateLynxWithPayload:(id)a0;
- (id)initWithPayload:(id)a0 lynxSchema:(id)a1 height:(double)a2;
- (void)buildLynxContainerWithUrl:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)viewType;
- (void)dealloc;

@end
