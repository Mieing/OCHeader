@class NSDictionary, NSString, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface AWELivePrefetchWithImagesMethodImpl : AWELivePrefetchWithImagesMethod <IESLivePiperProtocol>

@property (copy, nonatomic) NSDictionary *result;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)registerNewHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (id)modeToDict:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
