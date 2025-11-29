@class DVEVCContext, UIImageView, AWEDemaciaChapterProgressSlider, UISlider, UIView;

@interface ACCChapterPreviewViewController : UIViewController

@property (retain, nonatomic) UISlider *progressSlider;
@property (retain, nonatomic) AWEDemaciaChapterProgressSlider *chapterProgressBar;
@property (retain, nonatomic) UIView *previewRenderContentView;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) UIView *previewRenderView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (nonatomic) BOOL useChapterProgressBar;
@property (nonatomic) BOOL useChapterProgressBarUp;

- (id)defaultThumbImage;
- (void)updateChapterDetails:(id)a0 chapterBarColors:(id)a1;
- (void)refreshContext:(id)a0;
- (void)shouldShowChapterProgressBar:(BOOL)a0;
- (void)updatePreviewSizeWithOriginalVideoSize:(struct CGSize { double x0; double x1; })a0 newVideoSize:(struct CGSize { double x0; double x1; })a1;
- (void)resetReeditUI;
- (void)updateChapterDetails:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateProgress:(double)a0;

@end
