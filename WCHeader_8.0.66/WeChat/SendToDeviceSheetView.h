@class UIStackView, NSString, MMIotNavigateInfo, SSVMiniAppRedirectInfo, MsgToDeviceLogic, UIImageView, UIButton, WCDevice, MMUILabel, MMIconItemView, MMUIActivityIndicatorView;

@interface SendToDeviceSheetView : MMAutoLayoutSheetView <MsgToDeviceDelegate, IWCLanDeviceMsgForwardMgrExt>

@property (retain, nonatomic) MMIconItemView *itemView;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *doneImageView;
@property (retain, nonatomic) UIImageView *failureImageView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) NSString *msgDescription;
@property (retain, nonatomic) UIStackView *ssvStackView;
@property (retain, nonatomic) MMIotNavigateInfo *navigateInfo;
@property (retain, nonatomic) SSVMiniAppRedirectInfo *ssvRedirectInfo;
@property (retain, nonatomic) WCDevice *device;
@property (retain, nonatomic) MsgToDeviceLogic *ilinkDeviceLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 messageWrap:(id)a1;
- (void)initConfigs;
- (void)initView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)switchToLoadingState;
- (void)switchToSuccessStateWithNavigateInfo:(id)a0;
- (void)switchToFailureStateOfType:(long long)a0;
- (void)switchToFailureStateOfType:(long long)a0 errorInfo:(id)a1;
- (void)sendToDevice;
- (void)onToDeviceMsgSent;
- (id)paramDicFromJsonString:(id)a0;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)a0 toDevice:(id)a1;
- (void)onMsgToDeviceSuccess:(id)a0;
- (void)onMsgToDeviceSuccessToWeApp:(id)a0;
- (void)onMsgToDeviceSuccessToSSV:(id)a0;
- (void)onMsgToDeviceFail:(id)a0 type:(long long)a1 errorInfo:(id)a2;
- (void)onMsgToDeviceSending:(id)a0 progress:(double)a1;
- (id)titleLabel:(id)a0;
- (id)subTitleLabel:(id)a0;
- (void)onClickSSVItem;
- (void).cxx_destruct;

@end
