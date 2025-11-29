@class UIView, NSString, MMFinderLiveCastingView, UITableView, MMLiveHalfScreenTitleBarView, MMFinderLiveCastViewModel, UILabel, MMUIButton;

@interface MMFinderLiveCastViewController : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveCastViewModelDelegate, MMFinderLiveCastingViewDelegate, MMLiveHalfScreenTitleBarViewDelegate>

@property (retain, nonatomic) MMFinderLiveCastViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMFinderLiveCastingView *castingView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *operateAllButton;
@property (nonatomic) BOOL hasReportedThatDevicesDisplaying;
@property (nonatomic) BOOL castingDeviceViewItemDidChanged;
@property (nonatomic) unsigned long long projectionSearchTime;
@property (nonatomic) unsigned long long lastCastingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 lastCastingTime:(unsigned long long)a1;
- (id)initWithViewModel:(id)a0;
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)currentContentViewHeight;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetDidDisappear:(BOOL)a0;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetWillAppear;
- (void)initContainerView;
- (void)initTableView;
- (void)layoutTableView;
- (void)initCastingView;
- (void)refreshCastingView;
- (void)initTitleBarView;
- (void)layoutTitleBarView;
- (void)refreshTopViews;
- (void)layoutTopViews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)liveCastViewModelDidReloadViewItems:(id)a0;
- (void)liveCastViewModel:(id)a0 didFailToCastDeviceViewItem:(id)a1 withError:(id)a2;
- (void)liveCastViewModel:(id)a0 castingDeviceViewItemDidChange:(id)a1;
- (void)liveCastingViewDidClickStopButton:(id)a0;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
