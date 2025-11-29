@class NSString, DiscoverEntranceSettingReporter, DiscoverEntranceSettingSheetView, WCTableViewNormalCellManager;
@protocol DiscoverEntranceSettingHandlerDelegate;

@interface DiscoverEntranceSettingAbstractCellHandler : WCTableViewCellHandler <ServiceAuthExt, DiscoverEntranceSettingSheetViewDelegate>

@property (weak, nonatomic) WCTableViewNormalCellManager *cellMgr;
@property (retain, nonatomic) DiscoverEntranceSettingSheetView *sheetView;
@property (nonatomic) unsigned long long rowType;
@property (retain, nonatomic) DiscoverEntranceSettingReporter *reporter;
@property (weak, nonatomic) id<DiscoverEntranceSettingHandlerDelegate> delegate;
@property (nonatomic) BOOL enabledEntrace;
@property (nonatomic) BOOL enabledReddot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)genCellManager;
- (void)showSettingSheetView;
- (id)makeSettingSheetView;
- (id)title;
- (BOOL)originalEntraceSwitchOn;
- (id)iconImage;
- (BOOL)hasReddotAbility;
- (BOOL)originalReddotSwitchOn;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)statusDesc;
- (void)updateRightDescription;
- (unsigned long long)serviceAuthType;
- (BOOL)isWeixinServiceForOversea;
- (BOOL)willShowWeChatAuthorization;
- (unsigned long long)settingEntrancePluginType;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)reddotCtrlFlagMask;
- (void)onSwitchChanged:(id)a0 switchType:(unsigned long long)a1 sheetView:(id)a2;
- (void)onSheetDisppearWithSwitchChanged:(id)a0;
- (void)onEntranceSwitchChanged:(id)a0;
- (void)saveNewReddotEnableValue:(BOOL)a0;
- (void)saveNewEntranceValue:(BOOL)a0;
- (void)sendEntranceValueToServer:(BOOL)a0;
- (void)showAuthViewWithSwitchType:(unsigned long long)a0 oSwitch:(id)a1;
- (void)showCloseViewWithSwitchType:(unsigned long long)a0 oSwitch:(id)a1 titile:(id)a2 description:(id)a3;
- (void)showCloseViewWithSwitchType:(unsigned long long)a0 oSwitch:(id)a1 titile:(id)a2 description:(id)a3 confirmTitle:(id)a4;
- (void)cancelWeChatServiceAuth:(id)a0;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onCloseService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
