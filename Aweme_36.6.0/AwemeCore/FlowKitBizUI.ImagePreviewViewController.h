@interface FlowKitBizUI.ImagePreviewViewController : FlowCommon.FlowBaseViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ originImage;
    void /* unknown type, empty encoding */ imageScrollView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ maskLayer;
    void /* unknown type, empty encoding */ dotLineLayer;
    void /* unknown type, empty encoding */ rectangleBorder;
    void /* unknown type, empty encoding */ config;
}

- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)clickCancel;
- (void)clickDone;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
