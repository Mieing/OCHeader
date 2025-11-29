@class NSString, WKWebView, UILabel, UIButton;

@interface AWEIMWebViewFilePreviewViewController : UIViewController <AWEIMOpenFilePreviewProtocol>

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileType;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WKWebView *filePreviewView;
@property (retain, nonatomic) UIButton *leftBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked;
- (void)openFileWithFilePath:(id)a0;
- (void)rightBtnClick;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
