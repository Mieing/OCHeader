@interface FlowLynx.FlowContainerManager : NSObject <IvyKit.IvyContainerLifeCycle> {
    void /* unknown type, empty encoding */ trackParamsDict;
    void /* unknown type, empty encoding */ enterTimeStampDict;
}

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerViewControllerViewDidAppearWithIvyContainer:(id)a0;
- (void)containerViewControllerViewDidDisAppearWithIvyContainer:(id)a0;
- (void)container:(id)a0 didReceiveError:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
