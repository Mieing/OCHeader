@class NSString, UIImageView, AWEPublishPreviewConfig, UIView, AWEStickerContainerFakeProfileView;

@interface AWEPublishPreviewView : UIView <ACCEditPreviewMessageProtocol, AWEPublishPreviewViewProtocol>

@property (retain, nonatomic) AWEPublishPreviewConfig *config;
@property (retain, nonatomic) UIView *playerContainerView;
@property (nonatomic) double currentPlayerTime;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) AWEStickerContainerFakeProfileView *fakeFeedInfoView;
@property (nonatomic) BOOL isFirstLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (id)p_modernStickerContainerWithModels:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getValidPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configPlayerView;
- (void)configFakeFeedInfoView;
- (void)configStickerContainer;
- (void)configPreviewImageView;
- (void)viewDidAppear;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
