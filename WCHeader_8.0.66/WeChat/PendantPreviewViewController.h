@class PendantPreviewSelectView, NSString, UIImageView, PendantPreviewView, MMUIView, PendantPreviewLogic, PreviewBottomButton;

@interface PendantPreviewViewController : MMUIViewController <PendantPreviewSelectViewDelegate, PendantPreviewLogicDelegate>

@property (retain, nonatomic) UIImageView *topMaskView;
@property (retain, nonatomic) UIImageView *bottomMaskView;
@property (retain, nonatomic) PendantPreviewView *previewView;
@property (retain, nonatomic) MMUIView *bottomBarView;
@property (nonatomic) long long currentType;
@property (retain, nonatomic) PendantPreviewLogic *logic;
@property (retain, nonatomic) PendantPreviewSelectView *selectionView;
@property (retain, nonatomic) NSString *pendantUrl;
@property (nonatomic) BOOL isInterrupt;
@property (retain, nonatomic) PreviewBottomButton *cameraButton;
@property (retain, nonatomic) PreviewBottomButton *sceneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPendantUrl:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)initView;
- (void)onBack;
- (void)onSwitchScene;
- (void)onSwitchCamera;
- (void)onLensPackageLoaded:(id)a0;
- (void)onLensPackageLoadFail:(id)a0;
- (void)onPreviewReload:(id)a0;
- (void)onEffectReloadFinish;
- (void)selectedView:(id)a0 didSelectedIndex:(long long)a1;
- (BOOL)is9x16Screen;
- (void).cxx_destruct;

@end
