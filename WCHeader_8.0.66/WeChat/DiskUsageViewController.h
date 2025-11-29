@class MMUIActivityIndicatorView, NSString, MMFolder, UIButton;

@interface DiskUsageViewController : MMUIViewController <MFMailComposeViewControllerDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) UIButton *btnAnalyze;
@property (retain, nonatomic) UIButton *btnMail;
@property (retain, nonatomic) UIButton *btnDelete;
@property (retain, nonatomic) MMUIActivityIndicatorView *m_actView;
@property BOOL isChecking;
@property (retain) MMFolder *gFolder;
@property (nonatomic) BOOL bPro;
@property (copy, nonatomic) NSString *rootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDataPath;
- (void)initView;
- (void)OnFinish;
- (void)viewDidLoad;
- (void)OnShowDetail;
- (void)OnReAnalyze;
- (void)OnDiskUsage;
- (void)onForwarResult;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)wechatToFriend;
- (id)mimeOfFile:(id)a0;
- (void)writeMailWithAttachFile:(id)a0 filePath:(id)a1 zipName:(id)a2 zipPath:(id)a3;
- (void)onMail;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void).cxx_destruct;

@end
