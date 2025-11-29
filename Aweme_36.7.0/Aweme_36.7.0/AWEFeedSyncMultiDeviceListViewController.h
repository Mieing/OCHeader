@class UIView, NSTimer, NSArray, DUXButton, NSString, AWEFeedSyncMultiDeviceHelpCell, UITableView, AWEFeedSyncMultiDeviceLoadingCell, DUXLoadingParticleView, AWEFeedSyncMultiDeviceViewHeader, UILabel;

@interface AWEFeedSyncMultiDeviceListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXBasicSheetProtocol>

@property (retain, nonatomic) UITableView *listView;
@property (retain, nonatomic) AWEFeedSyncMultiDeviceViewHeader *header;
@property (nonatomic) BOOL startLoading;
@property (retain, nonatomic) NSArray *deviceData;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ reFreshBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (weak, nonatomic) AWEFeedSyncMultiDeviceLoadingCell *loadingCell;
@property (weak, nonatomic) AWEFeedSyncMultiDeviceHelpCell *helpCell;
@property (nonatomic) unsigned long long theme;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } helpAnimOrigin;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) UILabel *deviceSectionHeader;
@property (retain, nonatomic) UILabel *helpSectionHeader;
@property (retain, nonatomic) UIView *deviceSectionHeaderContainer;
@property (retain, nonatomic) UIView *helpSectionHeaderContainer;
@property (nonatomic) BOOL needAppendData;
@property (weak, nonatomic) NSTimer *queryTimer;
@property (nonatomic) BOOL isAutoQuerying;
@property (nonatomic) long long queryTimes;
@property (retain, nonatomic) DUXButton *scanButton;
@property (nonatomic) BOOL scanEnableForPortrait;
@property (nonatomic) BOOL scanEnableForLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)updateWithDeviceData:(id)a0;
- (id)initWithTheme:(unsigned long long)a0 selectedBlock:(id /* block */)a1 refreshBlock:(id /* block */)a2 trackBlock:(id /* block */)a3;
- (void)scanVCClose;
- (void)appendWithDeviceData:(id)a0;
- (void)reloadWithDeviceData:(id)a0;
- (void)appendRefreshData:(id)a0;
- (void)stopAutoQuerying;
- (void)startAutoQuerying;
- (void)autoQuerying;
- (void)handleScan;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)cancelTimer;
- (BOOL)isDark;
- (id)themeColor;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)handleRefresh;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
