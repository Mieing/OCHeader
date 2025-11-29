@class MsgImgPickerSelectedCollectionView, NSString, EditImageIntialView, MMUIButton, MultiImageScrollView, UIView, UIButton;
@protocol MsgImgPickerPreviewViewControllerDelegate, MsgImgPickerPreviewViewControllerDataSource;

@interface MsgImgPickerPreviewViewController : WCDragToCloseViewController <MultiImageScrollViewDelegate, MsgImgPickerSelectedCollectionViewDelegate, EditImageInitialViewDelegate> {
    MMUIButton *_editButton;
}

@property (retain, nonatomic) MultiImageScrollView *multiImageScrollView;
@property (retain, nonatomic) UIView *footerBkg;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MsgImgPickerSelectedCollectionView *selectedCollectionView;
@property (retain, nonatomic) UIButton *checkmarkButton;
@property (retain, nonatomic) EditImageIntialView *editImageInitialView;
@property (weak, nonatomic) id<MsgImgPickerPreviewViewControllerDelegate> delegate;
@property (weak, nonatomic) id<MsgImgPickerPreviewViewControllerDataSource> dataSource;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL previewSelectedOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTopBar;
- (void)initBottomBar;
- (void)resizeBlurViewWithCollectionVisiable:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)interactiveDismissEnabled;
- (BOOL)shouldInteractivePop;
- (BOOL)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)updateCheckmark;
- (void)updateDoneButton;
- (void)onConfirm;
- (void)onChangeSelection;
- (long long)imageCount;
- (long long)selectedImageCount;
- (void)viewDidTransitionToNewSize;
- (void)onEditImage:(id)a0;
- (void)onMsgImgPickerSelectedCollectionViewDidClickedAtIndex:(long long)a0;
- (id)getMsgImgPickerSelectedCollectionViewEditeMsgImg:(id)a0;
- (id)imageAtPage:(unsigned int)a0;
- (id)viewAtPage:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onChangePage;
- (void)onSingleTap:(id)a0;
- (void)setTopAndBottomBarsHidden:(BOOL)a0;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)hideVCAnimation;
- (void)getDisplayImage:(id /* block */)a0;
- (void)getOriginalImage:(id /* block */)a0;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void).cxx_destruct;

@end
