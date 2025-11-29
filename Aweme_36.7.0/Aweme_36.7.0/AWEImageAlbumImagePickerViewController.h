@class AWEAwemeModel, UIView, NSArray, NSString, AWEImageAlbumImagePickerSelectIndicator, UIButton, NSMutableArray, UICollectionView, UILabel;
@protocol AWEImageAlbumImagePickerViewControllerDelegate, AWEImageAlbumImagePickerViewDataSource;

@interface AWEImageAlbumImagePickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEImageAlbumImagePickerCollectionViewCellDelegate, AWEImageAlbumImagePickerViewControllerProtocol>

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEImageAlbumImagePickerSelectIndicator *selectAllIndicator;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSArray *images;
@property (retain, nonatomic) NSMutableArray *selectedIndices;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWEImageAlbumImagePickerViewDataSource> dataProvide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSlides;
@property (weak, nonatomic) id<AWEImageAlbumImagePickerViewControllerDelegate> delegate;

+ (void)showDownlodActionSheetSetSlides:(BOOL)a0 isImageClip:(BOOL)a1;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 enterFrom:(id)a1 resultHandler:(id /* block */)a2;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 isSingleLivePhoto:(BOOL)a1 enterFrom:(id)a2 currentCanDownload:(BOOL)a3 resultHandler:(id /* block */)a4;

- (void)p_reset;
- (void)showOnView:(id)a0 withImages:(id)a1 awemeModel:(id)a2 completionBlock:(id /* block */)a3;
- (void)p_reloadCollectionView;
- (void)imagePickerCellDidTapOnSelectIndicator:(id)a0;
- (void)p_clearSelection;
- (void)p_selectAllImages;
- (void)p_handleSelectionChanged;
- (void)handleSelectAll;
- (void)showOnView:(id)a0 withImages:(id)a1 awemeModel:(id)a2 dataProvide:(id)a3 completionBlock:(id /* block */)a4;
- (void)p_setupImageDataForDataProvideIfNeed;
- (void)showOnView:(id)a0 withDataProvide:(id)a1 completionBlock:(id /* block */)a2;
- (void)p_setupUI;
- (void)handleSave;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)handleClose;

@end
