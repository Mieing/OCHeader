@class UIScreenEdgePanGestureRecognizer, BDPLoadingAnimationView, NSString, UIView, UIImageView, UIButton, UIDocumentInteractionController, UIViewController, UILabel, WKWebView;

@interface BDPOpenDocumentViewController : BDPViewController <UIDocumentInteractionControllerDelegate, WKNavigationDelegate, UIGestureRecognizerDelegate> {
    UIDocumentInteractionController *_documentController;
    NSString *_fileName;
    NSString *_fileType;
    UIImageView *_fileTypeImgV;
}

@property (retain, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) UIView *failBgView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *openThirdButton;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIView *loadingBgView;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingView;
@property (retain, nonatomic) UIButton *rightBarButtonItem;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIViewController *appController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backVC;
- (void)openInThirdApp;
- (id)initWithFilePath:(id)a0 fileName:(id)a1 fileType:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)loadView;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)setupUI;
- (id)documentInteractionControllerViewControllerForPreview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentInteractionControllerRectForPreview:(id)a0;
- (id)documentInteractionControllerViewForPreview:(id)a0;
- (void)updateNavigationTitle;

@end
