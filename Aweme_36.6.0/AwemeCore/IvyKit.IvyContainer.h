@interface IvyKit.IvyContainer : NSObject <BDXContainerLifecycleProtocol, IvyKit.IvyContainerProtocol> {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ lifecycleDelegate;
}

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerViewControllerViewDidAppear:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (id)rawView;
- (void).cxx_destruct;
- (id)init;

@end
