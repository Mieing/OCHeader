@class AWEEnterpriseIMLynxContainerViewModel, NSString, UIView, AWEEnterpriseIMLynxReuseDelegateObject, NSDate;
@protocol BDXViewContainerProtocol;

@interface AWEEnterpriseIMLynxContainerView : AWEEnterpriseMessageBaseView <BDXContainerLifecycleProtocol, AWEEnterpriseIMLynxReuseDelegateObjectDelegate> {
    id /* block */ _didFinishLynxLoadBlock;
}

@property (copy, nonatomic) NSDate *startLoadTimeDate;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletContainer;
@property (retain, nonatomic) AWEEnterpriseIMLynxReuseDelegateObject *delegateObject;
@property (weak, nonatomic) AWEEnterpriseIMLynxContainerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)bindViewModel:(id)a0;
- (id)lynxEngine;
- (void)enterpriseLynxReuseDelegateObject:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id /* block */)didFinishLynxLoadBlock;
- (void)p_didFinishLynxLoadWithSuccess:(BOOL)a0;
- (void)lynxDidEndDisplaying;
- (void)setDidFinishLynxLoadBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
