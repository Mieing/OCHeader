@class NSString, MMUIActivityIndicatorView, WCActionSheetWithScanWXCode, ImageScrollView;
@protocol GCImgPreviewDelegate;

@interface GCImgPreviewController : WCDragToCloseViewController <WCActionSheetDelegate, ImageScrollViewDelegate> {
    ImageScrollView *imageScrollView;
}

@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) NSString *cdnKey;
@property (retain, nonatomic) NSString *savePath;
@property (nonatomic) BOOL oriNavhidden;
@property (nonatomic) BOOL oriStatusBarHidden;
@property (retain, nonatomic) WCActionSheetWithScanWXCode *m_actionSheet;
@property (weak, nonatomic) id<GCImgPreviewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)onSingleTap:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)onOperate;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onSavedPhotosAlbum;
- (void)startDownloadImgWithFileKey:(id)a0 url:(id)a1 savePath:(id)a2 aesKey:(id)a3;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidDisappear:(BOOL)a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)animateTransition:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)displayImage:(id)a0;
- (void).cxx_destruct;

@end
