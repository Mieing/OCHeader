@class UITapGestureRecognizer, NSString, BDECPigeonAttachmentDownloadManager, UILabel, UIView, UIButton;
@protocol BDECPigeonUIUtilityProvider_I;

@interface BDECPigeonPresentDialogCustomerViewController : UIViewController

@property (retain, nonatomic) id<BDECPigeonUIUtilityProvider_I> utilityProvider;
@property (retain, nonatomic) UILabel *openOtherAppLabel;
@property (retain, nonatomic) UIButton *openOtherAppBtn;
@property (retain, nonatomic) UIView *centerSeperateView;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITapGestureRecognizer *backgroundTapGesture;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) BDECPigeonAttachmentDownloadManager *downloadManager;

- (void)clickOtherOpen;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)handleBackgroundTap:(id)a0;
- (id)initWithUtilityProvider:(id)a0;

@end
