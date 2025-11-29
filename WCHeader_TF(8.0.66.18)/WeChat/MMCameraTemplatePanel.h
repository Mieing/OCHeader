@class MMCameraEffectPanelViewModel, CAGradientLayer, UICollectionView, NSString;
@protocol MMCameraTemplatePanelPanelDelegate;

@interface MMCameraTemplatePanel : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MMCameraEffectPanelViewModelDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long currentSelectedIndex;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) MMCameraEffectPanelViewModel *viewModel;
@property (weak, nonatomic) id<MMCameraTemplatePanelPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewH;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupData;
- (void)fetchDataWithUsername:(id)a0 params:(id)a1;
- (void)fetchDataWithShortURL:(id)a0;
- (void)setupView;
- (void)reloadData;
- (double)getCollectInset;
- (id)currentSelectedTemplateItem;
- (id)templateItemAtIndex:(unsigned long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)cameraEffectPanelViewModelDidFetchTemplateComplete:(id)a0;
- (void)cameraEffectPanelViewModelDidFetchTemplateFail:(id)a0;
- (unsigned long long)cameraEffectPanelViewModelGetScene;
- (void).cxx_destruct;

@end
