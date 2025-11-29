@class NSString, UITextView;

@interface WXGBackupAnalyseViewController : MMUIViewController

@property (retain, nonatomic) UITextView *infoTextView;
@property (copy, nonatomic) NSString *infoString;

- (void)viewDidLoad;
- (void)showAnalyseInfo;
- (void)sendDataToFileHelper;
- (void).cxx_destruct;

@end
