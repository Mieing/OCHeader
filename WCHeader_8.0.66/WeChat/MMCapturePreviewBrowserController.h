@class UILabel, EditImageLogicController, MMAsset, MultiImageScrollView, MMCapturePreviewBrowserControlCenter, UIButton, UIView, NSMutableArray, NSString, EditImageIntialView, UIActivityIndicatorView, MMLoadingView, UIImage;
@protocol ImageBrowseDelegate;

@interface MMCapturePreviewBrowserController : MMUIViewController <MultiImageScrollViewDelegate, EditImageInitialViewDelegate> {
    UIView *_bottomBar;
    UIButton *_sendButton;
    UIButton *_originImageCheck;
    UILabel *_originImageLabel;
    NSMutableArray *_imageScrollViewPool;
    long long _originImageSize;
    UIActivityIndicatorView *_originIndictorView;
}

@property (retain, nonatomic) MMAsset *originAsset;
@property (retain, nonatomic) UIImage *assetImage;
@property (nonatomic) BOOL loadAssetFinish;
@property (nonatomic) BOOL m_hasClickSendButton;
@property (retain, nonatomic) EditImageLogicController *m_editImageLogicController;
@property (retain, nonatomic) MMAsset *m_editAsset;
@property (retain, nonatomic) MultiImageScrollView *pagingScrollView;
@property (retain, nonatomic) MMCapturePreviewBrowserControlCenter *controlCenter;
@property (nonatomic) unsigned int exposeLiveButtonCloseCount;
@property (nonatomic) unsigned int exposeLiveButtonOpenCount;
@property (nonatomic) unsigned int clickLiveButtonOpenCount;
@property (nonatomic) unsigned int clickLiveButtonCloseCount;
@property (weak, nonatomic) id<ImageBrowseDelegate> m_delegate;
@property (nonatomic) BOOL canSendOriginalImage;
@property (nonatomic) BOOL isCanSendLivePhoto;
@property (nonatomic) BOOL isEmoticonBoardSearchEnabled;
@property (retain, nonatomic) EditImageIntialView *_editImageInitialView;
@property (retain, nonatomic) MMLoadingView *_loadingView;
@property (nonatomic) unsigned int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithAsset:(id)a0 thumbImage:(id)a1;
- (void)dealloc;
- (BOOL)isForbidPageSheet;
- (void)initData;
- (void)startLoadAsset;
- (void)reloadBottomBar;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBeInteractivePoped;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)reportLivePhoto:(BOOL)a0;
- (void)OnCancel:(id)a0;
- (void)OnSend:(id)a0;
- (void)handleSend:(id)a0;
- (void)OnOriginSizeGot:(id)a0;
- (void)onOriginImageCheck:(id)a0;
- (id)viewAtPage:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageAtPage:(unsigned int)a0;
- (BOOL)ignorePageIndexTitle;
- (void)onSingleTap:(id)a0;
- (void)onEditImage:(id)a0;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)a0;
- (void)setBottomAndTopBarHiddenWithAnimation:(BOOL)a0;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)finishEditImage;
- (void)getDisplayImage:(id /* block */)a0;
- (void)getOriginalImage:(id /* block */)a0;
- (id)currentViewController;
- (void).cxx_destruct;

@end
