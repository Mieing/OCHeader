@class UIView, NSString, BDECPigeonClientV2, NSArray, UIImageView, UIButton, BDECPigeonAttachmentDownloadManager, UIProgressView, UILabel;
@protocol BDECPigeonUIUtilityProvider_I;

@interface BDECPigeonDownloadFileBaseViewController : UIViewController

@property (retain, nonatomic) id<BDECPigeonUIUtilityProvider_I> utilityProvider;
@property (retain, nonatomic) BDECPigeonAttachmentDownloadManager *downloadManager;
@property (retain, nonatomic) UIView *navigationBarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *moreBtnView;
@property (retain, nonatomic) UIView *downloadView;
@property (retain, nonatomic) UIImageView *fileImageView;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *progressFailedLabel;
@property (retain, nonatomic) UIButton *actionNormalButton;
@property (retain, nonatomic) UIButton *actionStressButton;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) BDECPigeonClientV2 *pigeonClient;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileType;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileDownloadURL;
@property (nonatomic) unsigned long long downloadStatus;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSArray *supportFileTypeArray;

- (void)actionBtnClick:(id)a0;
- (id)initWithRouteParams:(id)a0 utilityProvider:(id)a1 pigeonClient:(id)a2;
- (void)clickBackBtn:(id)a0;
- (id)progressTextColor;
- (void)clickMoreBtn:(id)a0;
- (id)progressFailTextColor;
- (id)actionBtnNormalBorderColor;
- (double)actionBtnCornerRadius;
- (struct CGSize { double x0; double x1; })actionBtnSize;
- (id)actionBtnStressBackgroundColor;
- (struct CGSize { double x0; double x1; })actionStressBtnSize;
- (void)updateDownloadStatus:(unsigned long long)a0 progress:(double)a1;
- (void)dealDownloadResultWithSuccess:(BOOL)a0 isCancel:(BOOL)a1;
- (void)showFilePreview;
- (id)actionBtnNormalTextColor;
- (id)actionBtnCannotOpenText;
- (id)actionBtnStressTextColor;
- (void)loadFile;
- (void)createDownloadManager;
- (void).cxx_destruct;
- (id)progressTintColor;
- (void)viewDidLoad;
- (id)trackTintColor;
- (void)setupUI;
- (void)beginDownload;

@end
