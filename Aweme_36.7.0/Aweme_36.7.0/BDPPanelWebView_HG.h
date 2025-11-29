@class NSString, BDPUniqueID;

@interface BDPPanelWebView_HG : BDPBridgeWebView <BDPWebViewImplInterface>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ hasInvoke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callbackInvoke:(long long)a0 data:(id)a1;
- (void)evaluateScript:(id)a0 completion:(id /* block */)a1;
- (id)initWithUniqueID:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configration:(id)a2;
- (void)webView:(id)a0 invoke:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
