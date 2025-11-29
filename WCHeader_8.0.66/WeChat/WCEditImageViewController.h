@class WCEditImageLayoutView, UIView, UIImage, EditImageAttr, WCEditViewControllerUIConfig, NSString, NSMutableArray, MMAsset, RecommendedMusicInfo;
@protocol WCEditImageViewControllerDelegate;

@interface WCEditImageViewController : MMUIViewController <WCEditImageLayoutViewDelegate>

@property (retain, nonatomic) UIView *tempView;
@property (retain, nonatomic) EditImageAttr *editImageAttr;
@property (nonatomic) unsigned long long fromScene;
@property (nonatomic) unsigned long long entranceScene;
@property (nonatomic) unsigned long long editImageUIStyle;
@property (retain, nonatomic) WCEditImageLayoutView *editImageLayoutView;
@property (weak, nonatomic) id<WCEditImageViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) NSMutableArray *imageDatas;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) MMAsset *asset;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (nonatomic) unsigned long long backStyle;
@property (retain, nonatomic) WCEditViewControllerUIConfig *uiConfig;
@property (nonatomic) BOOL isEmoticonBoardSearchEnabled;
@property (nonatomic) BOOL isLiteApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0 tempView:(id)a1;
- (id)initWithAssets:(id)a0 images:(id)a1 tempView:(id)a2;
- (id)initWithAssets:(id)a0 images:(id)a1 imageDatas:(id)a2 tempView:(id)a3;
- (id)initWithImage:(id)a0 editImageAttr:(id)a1;
- (id)initWithAssets:(id)a0 images:(id)a1 editImageAttr:(id)a2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)hidesStatusBar;
- (void)showEditImageViewOn;
- (void)updateImage:(id)a0;
- (void)getDisplayImage:(id /* block */)a0;
- (void)getOriginalImage:(id /* block */)a0;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)dealSelectResult:(id)a0;
- (void)onChangeAssetDatas:(id)a0 images:(id)a1 imageDatas:(id)a2;
- (id)currentViewController;
- (BOOL)shouldSaveUnCropImages;
- (void)asyncFetchAssetExifs:(id /* block */)a0;
- (void)asyncFetchAssetExifAt:(long long)a0 storeTo:(id)a1 finish:(id /* block */)a2;
- (void)debugTap;
- (void)onEditImageChooseVideoBGMDone:(id)a0;
- (void).cxx_destruct;

@end
