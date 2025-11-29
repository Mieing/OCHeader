@class NSString, NSMutableDictionary, AWEEcomAISearchAnnieXModel, BDXBridgeEventSubscriber, UIView, NSMutableArray, AWEDynamicPatchModel;
@protocol AnnieXContainerBaseProtocol;

@interface AWEEcomAISearchAnnieXView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (nonatomic) double preferWidth;
@property (retain, nonatomic) AWEEcomAISearchAnnieXModel *annieXModel;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXView;
@property (retain, nonatomic) NSMutableDictionary *eventCallBacks;
@property (retain, nonatomic) NSMutableArray *eventCache;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL isResourceSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillCreated:(id)a0 view:(id)a1;
- (void)containerDidCreated:(id)a0 view:(id)a1;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)containerDidFirstScreen:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unRegisterEventCallBack:(id)a0;
- (void)registerEventCallBack:(id /* block */)a0 forEvent:(id)a1;
- (id)initWithDynamicPatch:(id)a0 preferWidth:(double)a1;
- (id)annieXViewRenderWithAnnieXModel:(id)a0;
- (id)initWithDynamicPatch:(id)a0;
- (void)destory;
- (void)annieXViewUpdateWithAnnieXModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithModel:(id)a0;

@end
