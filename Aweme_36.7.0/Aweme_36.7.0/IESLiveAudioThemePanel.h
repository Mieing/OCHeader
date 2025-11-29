@class IESLiveAudioThemePanelViewModel, IESLivePopupInsideCollectionView, NSString, UIView, UILabel, UIButton;
@protocol IESLivePhotoLibraryService;

@interface IESLiveAudioThemePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (retain, nonatomic) IESLiveAudioThemePanelViewModel *viewModel;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) IESLivePopupInsideCollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (retain, nonatomic) UIButton *ugcBtn;
@property (copy, nonatomic) id /* block */ didClickTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelHeight;
+ (double)bottomMargin;

- (void)bindViewModel;
- (id)initWithViewModel:(id)a0 context:(id)a1;
- (void)editImage:(id)a0 fromController:(id)a1;
- (void)uploadButtonDidClick;
- (void)editAsset:(id)a0 fromController:(id)a1;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setupConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setupViews;

@end
