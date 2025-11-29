@interface WeChat.MagicSnsTimelineService : MMUserService <MMServiceProtocol, WeChat.IMagicSnsTimelineService> {
    void /* unknown type, empty encoding */ snsTimelineBiz;
}

- (void)onServiceClearData;
- (void)onServiceInit;
- (unsigned int)getPkgVersion;
- (void)createBiz;
- (void)enterSceneWithScene:(long long)a0 fireworkPlayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 delegate:(id)a2;
- (void)triggerFireWorkWithInfo:(id)a0;
- (void)destroyBiz;
- (id)init;
- (void).cxx_destruct;

@end
