@class AWEIMLeagueFileViewControllerViewModel, NSString, UIImageView, AWEIMFileAttachmentDownloaderConfigModel, UILabel, AWEIMLeagueFileProgressView, UIButton;

@interface AWEIMLeagueFileViewController : UIViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) UILabel *fileSizeLabel;
@property (copy, nonatomic) NSString *fileSize;
@property (retain, nonatomic) UILabel *downloadErrorLabel;
@property (retain, nonatomic) AWEIMLeagueFileProgressView *progressView;
@property (retain, nonatomic) UIButton *downloadBtn;
@property (retain, nonatomic) UIButton *openFileBtn;
@property (retain, nonatomic) AWEIMLeagueFileViewControllerViewModel *viewModel;
@property (retain, nonatomic) AWEIMFileAttachmentDownloaderConfigModel *downloadConfigModel;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) UIButton *leftBtn;

- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)backBtnClicked;
- (void)configData;
- (void)clickDownloadBtn;
- (id)initWithBridgeModel:(id)a0 configModel:(id)a1;
- (void)addViewConstraints;
- (void)addDownloaderKVO;
- (void)configUIData;
- (void)downloadFileOrPreviewFile;
- (void)beginDownloadFile;
- (void)configOpenFileAndOtherView;
- (void)showPreviewOrOpenUseOtherView;
- (void)updateFileStatus:(unsigned long long)a0;
- (void)updateDownloadFileProgress:(double)a0;
- (BOOL)checkFilePathEnable;
- (void)popFileDownloadViewControllerWithAnimation:(BOOL)a0;
- (void)popOrContinueDownlaod;
- (void)clickOpenFileBtn;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)openFile;

@end
