@class UIButton, NSString, MMLiveTask, UIView, LiveInfo, MMUILabel;

@interface MMGroupLiveReplaySettingViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMGroupLiveReplaySettingPickerControllerDelegate, MMAcceptAgreementResultViewControllerDelegate>

@property (retain, nonatomic) LiveInfo *liveInfo;
@property (retain, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *replayUrl;
@property (nonatomic) BOOL enableLiveReplay;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIView *replaySettingTopLine;
@property (retain, nonatomic) UIView *replaySettingBottomLine;
@property (retain, nonatomic) UIButton *replaySettingButton;
@property (retain, nonatomic) MMUILabel *replaySettingButtonLabel;
@property (retain, nonatomic) MMUILabel *replayStatusTitle;
@property (retain, nonatomic) MMUILabel *replayStatusTips;
@property (retain, nonatomic) UIButton *replayButton;
@property (nonatomic) BOOL needAutoRotateToPortrait;
@property (nonatomic) long long currDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadData;
- (void)updateWithLiveInfo:(id)a0;
- (void)updateReplayStatus;
- (void)updateReplaySettingButtonLabel;
- (void)hideReplayStatus;
- (void)updateReplayButtonIfReplayIsReady;
- (void)updateReplayButtonIfReplayInProcess;
- (void)setupUI;
- (void)layoutHeaderView;
- (void)layoutReplaySettingButtonView;
- (void)layoutReplayStatusView;
- (void)onReplaySettingButtonClicked;
- (void)onReplayButtonClicked;
- (void)onReplayButtonIfReplayExpiredClicked;
- (void)onReplayButtonIfReplayErrorClicked;
- (void)onMMGroupLiveReplaySettingPickerControllerReplayStatus:(BOOL)a0;
- (void)onOpenLiveReplayResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 enableLiveReplay:(BOOL)a3;
- (void)onGetLiveInfoWithResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 andLiveInfo:(id)a3;
- (void)onClickMakeSureActionWithViewController:(id)a0;
- (id)createReportLabel:(id)a0 withFontSize:(id)a1 withTextColor:(id)a2;
- (id)createHorizontalSeperator;
- (void).cxx_destruct;

@end
