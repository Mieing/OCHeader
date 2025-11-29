@interface AWELiveSwiftImpl.AWEFeedLiveTabOperationLivePlayView : UIView <AWELivePreviewStreamViewDelegate> {
    void /* unknown type, empty encoding */ playerView;
    void /* unknown type, empty encoding */ roomModel;
}

- (void)previewStreamViewStartPlay:(id)a0;
- (void)previewStreamViewPlayFinished:(id)a0;
- (void)trackPreviewPlayError;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
