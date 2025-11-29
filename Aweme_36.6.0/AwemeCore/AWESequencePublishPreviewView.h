@class NSString, UIImageView, AWEPublishPreviewConfig, UIView, AWEStickerContainerFakeProfileView;

@interface AWESequencePublishPreviewView : UIView <ACCEditPreviewMessageProtocol, AWEPublishPreviewViewProtocol>

@property (retain, nonatomic) AWEPublishPreviewConfig *config;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (weak, nonatomic) UIView *preSuperview;
@property (nonatomic) BOOL preEnableAutoplay;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isFirstLayout;
@property (retain, nonatomic) AWEStickerContainerFakeProfileView *fakeFeedInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)updatePreviewImage;
- (void)configFakeFeedInfoView;
- (void)configPreviewImageView;
- (void)showSubPlayerIfNeeded;
- (BOOL)useNewSlidesCoverEdit;
- (void)configMediaContainerView;
- (void)viewDidAppear;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)resetPlayer;
- (void)viewWillDisappear;

@end
