@interface WeChat.MagicCardStarterService : MMUserService <MMServiceProtocol, MagicCardStarterProtocols.IMagicCardStarterService> {
    void /* unknown type, empty encoding */ handleToBiz;
    void /* unknown type, empty encoding */ handleToBizCreator;
}

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)aquireBizWithBizCreator:(id)a0 instanceKey:(id)a1;
- (void)pauseBizWithHandle:(id)a0;
- (void)pauseFrameSetRootWithHandle:(id)a0;
- (void)resumeBizWithHandle:(id)a0;
- (void)redrawWithHandle:(id)a0;
- (void)activeWithHandle:(id)a0 viewController:(id)a1;
- (void)deactiveWithHandle:(id)a0;
- (void)notifyJsEventWithHandle:(id)a0 jsEvent:(id)a1;
- (void)preloadWithHandle:(id)a0 rootConfig:(id)a1 frameSetName:(id)a2 frameSetData:(id)a3 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 preloadStrategy:(long long)a5;
- (void)bindFrameSetViewWithHandle:(id)a0 rootConfig:(id)a1 containerView:(id)a2 frameSetName:(id)a3 frameSetData:(id)a4 viewId:(long long)a5 callback:(id /* block */)a6;
- (void)scrollAllOnScreenFrameSetViewWithHandle:(id)a0 rootConfig:(id)a1 offsetHeight:(double)a2 listViewTop:(double)a3;
- (void)removeFrameSetViewWithHandle:(id)a0 rootConfig:(id)a1 frameSetName:(id)a2;
- (void)removeAllFrameSetViewWithHandle:(id)a0 rootConfig:(id)a1;
- (id)getBizAppConfigWithHandle:(id)a0;
- (void)releaseBizWithHandle:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
