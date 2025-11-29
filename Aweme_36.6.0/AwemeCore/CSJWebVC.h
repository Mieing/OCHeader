@class UIView, CSJDislikeContext, CSJMaterialMeta, NSString, UILabel, CSJWKWebViewClient, UIButton;

@interface CSJWebVC : UIViewController <BUWebViewDelegate>

@property (retain, nonatomic) CSJWKWebViewClient *webView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) UIView *custormNavigationView;
@property (retain, nonatomic) UIButton *copyLinksButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (retain, nonatomic) CSJMaterialMeta *meta;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) BOOL showCopyLinkButton;
@property (nonatomic) BOOL showDislikeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaterialMeta:(id)a0;
- (void)creatWebView;
- (void)createNavigationItems;
- (void)dislikeClick:(id)a0;
- (void)copyLink:(id)a0;
- (void)showToastView:(id)a0;
- (void)goback:(id)a0;
- (void)bu_loadRequest:(id)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
