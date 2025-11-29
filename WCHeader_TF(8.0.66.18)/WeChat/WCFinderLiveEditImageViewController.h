@class NSString, UIView, MMFinderLiveEditImagePreviewPageSheet, MMUIButton;

@interface WCFinderLiveEditImageViewController : WCFinderRootEditImageViewController

@property (nonatomic) BOOL currentNavBarHidden;
@property (retain, nonatomic) UIView *topBlurView;
@property (retain, nonatomic) MMFinderLiveEditImagePreviewPageSheet *previewPageSheet;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUIButton *previewButton;
@property (copy, nonatomic) id /* block */ editImageBackCompletion;
@property (nonatomic) struct CGSize { double width; double height; } cropImageRatio;
@property (nonatomic) BOOL showPreviewButton;
@property (retain, nonatomic) NSString *previewBulletinTitle;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)initPreviewPageSheet;
- (BOOL)useTransparentNavibar;
- (void)onClickEditImagePreview;
- (double)getEditAreaTopMargin;
- (void)showEditImageViewOn;
- (void)onClickItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (void)onEnterEditImageProcess;
- (void)onExitEditImageProcess;
- (void).cxx_destruct;

@end
