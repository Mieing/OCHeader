@class MMUIActivityIndicatorView, NSString, UIImageView, MMUIScrollView, WXGRoamDeleteHalfView, UIButton, UILabel, SightIconView;

@interface WXGRoamDeleteViewController : MMUIViewController <WCActionSheetDelegate, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) MMUIScrollView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *clearBtn;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL bDeleteAbort;
@property (retain, nonatomic) WXGRoamDeleteHalfView *disconnectView;
@property (nonatomic) long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)a0 packageID:(unsigned long long)a1;
- (void)close;
- (void)cancel;
- (void)initViews;
- (void)layoutUI;
- (void)layoutDefaultUI;
- (void)layoutClearingUI;
- (void)layoutFinishedUI;
- (void)resetClearBtn;
- (void)updateLabel:(id)a0 text:(id)a1 lineHeight:(double)a2;
- (BOOL)stopIfNeeded;
- (void)startConnect;
- (void)showClearLocalDataActionSheet;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onTapClearBtn;
- (void).cxx_destruct;

@end
