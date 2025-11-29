@interface AWEStoryImpl.StoryListLynxBizCell : AWEStoryBizUI.StoryListBaseCell <HunterContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ lynxView;
    void /* unknown type, empty encoding */ lastLoadSchema;
    void /* unknown type, empty encoding */ needUpdateLynxHeight;
}

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
