@protocol IESLiveDynamicGiftRouter;

@interface IESLiveCloseGiftWebViewMethodImpl : IESLiveCloseGiftWebViewMethod

@property (retain, nonatomic) id<IESLiveDynamicGiftRouter> giftModule;
@property (nonatomic) BOOL closed;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)p_closeContainer:(id)a0 keepOffline:(BOOL)a1 animate:(BOOL)a2 willClose:(id /* block */)a3 completion:(id /* block */)a4;
- (void)p_updateInteractiveGiftGuideStoreIfGuideFinished;
- (void).cxx_destruct;

@end
