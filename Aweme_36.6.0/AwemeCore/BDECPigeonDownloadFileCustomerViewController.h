@class WKWebView;

@interface BDECPigeonDownloadFileCustomerViewController : BDECPigeonDownloadFileBaseViewController

@property (retain, nonatomic) WKWebView *filePreviewView;

- (id)progressTextColor;
- (void)clickMoreBtn:(id)a0;
- (id)progressFailTextColor;
- (id)actionBtnNormalBorderColor;
- (double)actionBtnCornerRadius;
- (struct CGSize { double x0; double x1; })actionBtnSize;
- (id)actionBtnStressBackgroundColor;
- (struct CGSize { double x0; double x1; })actionStressBtnSize;
- (id)actionBtnNormalTextColor;
- (id)actionBtnCannotOpenText;
- (id)actionBtnStressTextColor;
- (void)loadFile;
- (void)createDownloadManager;
- (void).cxx_destruct;
- (id)progressTintColor;
- (id)trackTintColor;
- (void)setupUI;

@end
