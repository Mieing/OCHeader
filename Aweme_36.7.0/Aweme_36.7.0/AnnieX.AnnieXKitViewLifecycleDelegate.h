@interface AnnieX.AnnieXKitViewLifecycleDelegate : NSObject <BDXKitViewLifecycleProtocol> {
    void /* unknown type, empty encoding */ kitViewLifecycle;
}

- (void)viewDidStartLoading:(id)a0;
- (void)view:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)view:(id)a0 updateTitle:(id)a1;
- (void)viewDidNavigatedStateChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
