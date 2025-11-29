@class NSString, NSArray, UIImage, MASConstraint, AWESharePanelView;

@interface AWEShareDetailWithImageViewController : UIViewController <AWESharePanelViewDelegate>

@property (nonatomic) long long sharePlatformType;
@property (retain, nonatomic) AWESharePanelView *sharePanelView;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long settingShareMode;
@property (nonatomic) BOOL preparingShare;
@property (retain, nonatomic) MASConstraint *topContainerViewCenterY;
@property (retain, nonatomic) MASConstraint *topContainerViewTopAlignToViewBottom;
@property (retain, nonatomic) MASConstraint *topContainerViewSharePanelSpace;
@property (retain, nonatomic) MASConstraint *sharePanelTopAlignToViewBottom;
@property (retain, nonatomic) MASConstraint *sharePanelBottomAlignToViewBottom;
@property (retain, nonatomic) UIImage *rendImage;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL darkSharePanel;
@property (readonly, copy, nonatomic) NSArray *sharePlatforms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPanel:(BOOL)a0;
- (void)prepareToShare;
- (void)imageSavedToPhotosAlbum:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)doAppearAnimation;
- (void)configSharePanelMask;
- (id)allSharePlatforms;
- (BOOL)isSharePlatformAvailable:(long long)a0;
- (id)p_maskLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)saveSuccessfullyMessageForShareType:(long long)a0;
- (void)openAppWithShareType:(long long)a0;
- (id)getPlatformString:(long long)a0;
- (id)sharePlatformUnavailableMessage:(long long)a0;
- (void)onImageSaveSuccessfully;
- (void)shareItemTapped:(long long)a0;
- (id)initWithImage:(id)a0 onViewController:(id)a1 dismissHandler:(id /* block */)a2;
- (void)showSharePanel;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpSubviews;
- (void)cancelButtonTapped;
- (void)showOnViewController:(id)a0;

@end
