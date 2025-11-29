@class DUXBasicSheet, NSString, DUXInfoPanel, UIView, DUXCheckBox;

@interface AWESearchWebNoticeViewKit : NSObject

@property (retain, nonatomic) UIView *bn_bottomNotification;
@property (retain, nonatomic) DUXCheckBox *bn_checkBox;
@property (nonatomic) BOOL bn_checkBoxIsOn;
@property (copy, nonatomic) id /* block */ bn_turnOffGlobalBlock;
@property (copy, nonatomic) id /* block */ bn_searchParamsBlock;
@property (copy, nonatomic) NSString *bn_originUrl;
@property (nonatomic) long long webNoticeViewKitType;
@property (retain, nonatomic) DUXBasicSheet *ip_infoPanelSheet;
@property (retain, nonatomic) DUXInfoPanel *ip_infoPanel;
@property (copy, nonatomic) id /* block */ ip_turnOffGlobalBlock;
@property (copy, nonatomic) id /* block */ ip_turnOnBlock;

- (void)showTransCodeConfirmInfoPanelWithTurnOffGlobalBlock:(id /* block */)a0 turnOnBlock:(id /* block */)a1;
- (void)bn_showBottomNotification;
- (void)bn_trackBottomNotificationShow;
- (id)bn_leftTopLabel;
- (id)bn_leftBottomLabel;
- (id)bn_closeButton;
- (id)bn_turnOffButton;
- (void)bn_removeBottomNotificationUseCheck:(BOOL)a0;
- (void)bn_clickCheckBox;
- (void)bn_clickTurnOffButton;
- (void)bn_clickCloseButton;
- (void)bn_trackBottomNotificationClickWithType:(id)a0;
- (id)bn_trackParams;
- (void)ip_showInfoPanel;
- (void)ip_clickCloseTransCodeButton;
- (void)ip_clickSaveTransCodeButton;
- (void)showTransCodeSuccessBottomNotificationWithUrl:(id)a0 turnOffGlobalBlock:(id /* block */)a1 searchParamsBlock:(id /* block */)a2 searchWebNoticeViewKitType:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
