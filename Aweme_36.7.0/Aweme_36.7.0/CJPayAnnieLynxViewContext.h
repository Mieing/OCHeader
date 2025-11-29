@class NSString, UIView;
@protocol CJPayLynxViewDelegate;

@interface CJPayAnnieLynxViewContext : NSObject <BDXContainerLifecycleProtocol, CJPayLynxViewContextProtocol>

@property (weak, nonatomic) UIView *lynxCardView;
@property (weak, nonatomic) id<CJPayLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillConstructKitView:(id)a0 source:(long long)a1;
- (void)containerDidStartLoading:(id)a0;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)containerDidPageUpdate:(id)a0;
- (void).cxx_destruct;

@end
