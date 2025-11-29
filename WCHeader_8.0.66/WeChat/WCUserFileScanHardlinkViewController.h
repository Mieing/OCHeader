@class NSString, UITextView, UIButton;

@interface WCUserFileScanHardlinkViewController : MMUIViewController <IUserFileScanServiceExt>

@property (retain, nonatomic) UITextView *infoTextView;
@property (copy, nonatomic) NSString *infoString;
@property (retain, nonatomic) UIButton *scanWithCacheButton;
@property (retain, nonatomic) UIButton *scanNoCacheButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)startHardlinkService;
- (void)startHardlinkServiceNoCache;
- (void)sendDataToFileHelper;
- (void)onUserFileScanServiceEnd;
- (void).cxx_destruct;

@end
