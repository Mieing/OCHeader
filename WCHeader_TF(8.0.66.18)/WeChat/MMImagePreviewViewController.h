@class MMImagePreviewActionSheet_PreviewView, NSString, MMImageActionSheet, UIView, MMImagePreviewInfo;

@interface MMImagePreviewViewController : MMUIViewController <MMImageActionSheetDelegate, MMImagePreviewActionSheet_PreviewViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMImagePreviewActionSheet_PreviewView *previewView;
@property (retain, nonatomic) MMImageActionSheet *imageActionSheet;
@property (retain, nonatomic) MMImagePreviewInfo *info;
@property (nonatomic) BOOL isPresented;
@property (nonatomic) unsigned long long supportedOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImagePreviewInfo:(id)a0;
- (void)showFromViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)layoutUI;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)imageActionSheetRelayout:(id)a0;
- (BOOL)imageActionSheet:(id)a0 shouldShowItem:(id)a1;
- (void)imageActionSheet:(id)a0 itemWillClicked:(id)a1;
- (BOOL)imageActionSheet:(id)a0 itemDidCustomEvent:(id)a1;
- (void)imageActionSheet:(id)a0 itemDidFinish:(id)a1;
- (void)imageActionSheet:(id)a0 didForwardMsgWraps:(id)a1 contacts:(id)a2;
- (void)imageActionSheetInShowAnimation:(id)a0;
- (void)imageActionSheetInDismissAnimation:(id)a0;
- (void)imageActionSheetDidDismiss:(id)a0;
- (void)imageActionSheet:(id)a0 willForward:(id)a1;
- (void)imageActionSheet:(id)a0 updateCropImage:(id)a1;
- (void)onUpdateImage:(id)a0;
- (void).cxx_destruct;

@end
