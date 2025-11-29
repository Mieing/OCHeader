@class UIView, AWEVideoPlayerController, NSString, UIImageView, UIButton, AWEUGInnerPushExtraModel, UITableView, DUXLoadingCircleView, AWEUGInnerPushExtraSelectionModel, AWEUGSelectivePushGuideHeaderView;

@interface AWEUGSelectivePushGuideView : AWEUGPushGuideBaseView <UITableViewDataSource, UITableViewDelegate, AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) AWEUGInnerPushExtraModel *dataModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (retain, nonatomic) AWEUGSelectivePushGuideHeaderView *fakePushView;
@property (retain, nonatomic) AWEUGInnerPushExtraSelectionModel *currentSelectedOption;
@property (nonatomic) BOOL isPushGuidePopupViewOnScreen;
@property (nonatomic) long long popupID;
@property (retain, nonatomic) AWEVideoPlayerController *videoPlayController;
@property (retain, nonatomic) UIView *shadowBgView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingCircleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)preparedToPlayForURL:(id)a0;
- (id)aAWEPadBizUIAdapter;
- (double)tableViewHeaderHeight;
- (void)p_setupView;
- (id)initWithGuideViewModel:(id)a0;
- (void)configVideoView;
- (void)p_showInView:(id)a0 duration:(double)a1;
- (void)hideWithDuration:(double)a0;
- (void)overlayViewTapAction:(id)a0;
- (void)realShow;
- (double)p_tableViewHeight;
- (void)p_createTableHeaderView;
- (void)p_createTableFooterView;
- (void)p_onClickCancel;
- (void)p_onClickConfirm;
- (void)contentViewPanAction:(id)a0;
- (void)p_showWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)isDisplaying;

@end
