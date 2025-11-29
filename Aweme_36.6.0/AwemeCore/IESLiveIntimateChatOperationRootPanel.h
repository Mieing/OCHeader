@class IESLiveIntimateChatOperationMainPanel, HTSEventContext, IESLiveIntimateChatOperationPreOpenPanel, RACDisposable, UILabel, UIView, UIButton;
@protocol IESLiveRoomService, IESLiveAudienceInteractiveRootPanelDataSource, IESLiveIntimateChatOperationRootPanelDelegate;

@interface IESLiveIntimateChatOperationRootPanel : UIView

@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelDataSource> panelDataSource;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long adminLinkmicStatus;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UIButton *adminOperationButton;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *switchEntranceButton;
@property (retain, nonatomic) UIView *switchEntranceButtonRedDotView;
@property (retain, nonatomic) IESLiveIntimateChatOperationPreOpenPanel *preOpenPanel;
@property (retain, nonatomic) IESLiveIntimateChatOperationMainPanel *mainPanel;
@property (retain, nonatomic) RACDisposable *delayHideSettingPanelDispose;
@property (nonatomic) BOOL isFirstUpdateMsg;
@property (weak, nonatomic) id<IESLiveIntimateChatOperationRootPanelDelegate> delegate;
@property (nonatomic) BOOL showSwitchEntrance;

- (void)didSetAttachingDIContext;
- (void)trackPanelShow;
- (void)p_setupViews;
- (void)showSettingPanel;
- (void)p_clickBack;
- (void)updateAdminLinkmicStatus:(long long)a0;
- (BOOL)p_isInPaidLinkmicMultiAddPrice;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 room:(id)a2 eventContext:(id)a3;
- (void)updateWaitingListType:(unsigned long long)a0;
- (void)switch2PreOpenPanel;
- (void)switch2MainPanel;
- (BOOL)p_isPaidLinkmicAddPrice;
- (void)updateSettingRedDot;
- (void)p_onClickSwitchEntranceButton;
- (void)p_adminOperate;
- (void)p_remakeUI;
- (void).cxx_destruct;

@end
