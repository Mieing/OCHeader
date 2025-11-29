@class NSString, ColorGradientView, UIImageView, WCLivePhotoBrowseReport, WCLivePhotoButton, MMAssetICloudLoadingView, MMAssetInfo, MMAssetPickerBrowserStateInfo, MMUIButton;
@protocol MMImagePickerControlCenter, MMAssetPickerBrowserViewDelegate;

@interface MMImagePreviewBrowserView : ImageScrollView <IMMAssetICloudExt, MMAssetPickerBrowserViewProtocol>

@property (retain, nonatomic) ColorGradientView *iCloudBgView;
@property (retain, nonatomic) MMAssetICloudLoadingView *iCloudLoadingView;
@property (retain, nonatomic) WCLivePhotoButton *livePhotoButton;
@property (retain, nonatomic) MMUIButton *livePhotoNewButton;
@property (retain, nonatomic) UIImageView *livePhotoSelectImageView;
@property (nonatomic) struct CGPoint { double x; double y; } livePhotoPhotoPosition;
@property (nonatomic) BOOL isLivePhotoSelected;
@property (retain, nonatomic) WCLivePhotoBrowseReport *livePhotoBrowseReport;
@property (nonatomic) int pickerScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (nonatomic) BOOL requestUneditedAsset;
@property (nonatomic) BOOL shouldPlayWithEditAttr;
@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (weak, nonatomic) id<MMAssetPickerBrowserViewDelegate> browserDelegate;
@property (readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initLivePhotoBrowseReport;
- (void)initICloudLoadingView;
- (void)loadAsset;
- (void)onOriginSelectChanged;
- (void)loadHDRImage:(BOOL)a0 callback:(id /* block */)a1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onAssetVideoDownloadProgress:(double)a0 assetUrl:(id)a1;
- (void)onAssetVideoDonwloadFailed:(id)a0;
- (void)livePhotoButtonClicked:(id)a0;
- (void)updateLivePhotoButtonPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutLivePhotoButton;
- (void)setupLivePhotoButtonStyle:(unsigned long long)a0;
- (void)setLivePhotoButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)initLivePhotoButton;
- (void)updateLivePhotoViewWithAssetInfo:(id)a0 isSelected:(BOOL)a1;
- (void)showLivePhotoViewWithAssetInfo:(id)a0 isSelected:(BOOL)a1 isValidate:(BOOL)a2;
- (BOOL)isSnsScene;
- (void)configLivePhotoDataReport;
- (id)genLivePhotoReportDict;
- (void)reportLivePhotoExposeData;
- (void)reportLivePhotoPlayData:(long long)a0;
- (void).cxx_destruct;

@end
