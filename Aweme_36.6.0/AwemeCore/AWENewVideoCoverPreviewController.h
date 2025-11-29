@class AWENewVideoCoverPreviewView;

@interface AWENewVideoCoverPreviewController : UIViewController

@property (retain, nonatomic) AWENewVideoCoverPreviewView *previewView;

- (void)bottomViewDidSelectGalleryImage:(id)a0;
- (unsigned long long)videoCoverAiFrameType;
- (void)updatePreviewAreaSize:(struct CGSize { double x0; double x1; })a0 cutAreaSize:(struct CGSize { double x0; double x1; })a1 previewFitCutAreaSize:(struct CGSize { double x0; double x1; })a2 videoPreviewSize:(struct CGSize { double x0; double x1; })a3 videoOriginSize:(struct CGSize { double x0; double x1; })a4;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
