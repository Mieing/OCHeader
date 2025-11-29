@class NSString, BDXContext, UIView;
@protocol IESECMarketingHybridContainerDelegate, BDXViewContainerProtocol;

@interface IESECMarketingHybridBulletContainer : UIView <BDXContainerLifecycleProtocol, BDXBridgeProviderProtocol, IESECMarketingHybridContainerProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) BDXContext *context;
@property (weak, nonatomic) id<IESECMarketingHybridContainerDelegate> delegate;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxLynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)initWithSchema:(id)a0 referFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 data:(id)a2 extra:(id)a3 commonLog:(id)a4 hybirdModel:(id)a5 lifeCycleDelegate:(id)a6;
- (void).cxx_destruct;
- (void)loadView;

@end
