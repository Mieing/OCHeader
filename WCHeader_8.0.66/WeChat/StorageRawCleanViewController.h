@class NSString, UIImageView, MMProgressView, UILabel, UIButton;

@interface StorageRawCleanViewController : MMUIViewController <WCLongCacheCleanExt>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *estimateTimeLabel;
@property (retain, nonatomic) UIButton *bottomButton;
@property (retain, nonatomic) MMProgressView *progressView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (nonatomic) unsigned long long cleanState;
@property (nonatomic) float cleanProgress;
@property (nonatomic) float estimatedTimeMins;
@property (nonatomic) unsigned long long curSize;
@property (nonatomic) unsigned long long totalSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)refreshView;
- (void)setupViews;
- (void)showProgress;
- (void)onPressStop;
- (void)onReturn;
- (void)onRawCleanStateChange;
- (void)onRawCleanCleanProgress:(unsigned long long)a0 totalSize:(unsigned long long)a1;
- (void).cxx_destruct;

@end
