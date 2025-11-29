@class NSMutableDictionary, NSString, UICollectionView, UIVisualEffectView, UILabel, UIView, UIButton;
@protocol AWELiveDuetPostureViewControllerDelegate, ACCCameraService;

@interface AWELiveDuetPostureViewController : AWEStudioBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIButton *swapCameraButton;
@property (retain, nonatomic) NSString *renderImageKey;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableDictionary *imageDictionary;
@property (weak, nonatomic) id<AWELiveDuetPostureViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showOnView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupCameraButton;
- (void)p_moveToOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)cameraButtonPressed:(id)a0;
- (void)prepareForImageDataWithFolderPath:(id)a0;
- (void)prepareForCameraService:(id)a0;
- (void)updateRenderImageKeyWithEffectModel:(id)a0;
- (void)renderPicImageWithIndex:(long long)a0;
- (void)onClearBackgroundDidPressed:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0 duration:(double)a1;
- (void)p_prepareForDismiss;
- (void)p_clearSeletedCells;
- (double)collectionViewCellHeight;
- (id)swapCameraButtonImage;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (long long)defaultPosition;

@end
