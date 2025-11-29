@class NSString;

@interface AWEBigFontModuleServiceImpl : HTSService <AWEIMSettingModelUpdateMessage, DUXAlertDialogDelegate, AWEBigFontModuleService>

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long elderModeDelayEffect;

+ (id)fontStyleAttributeStorage;
+ (BOOL)fontSizeFollowSystemStorage;
+ (id)getFontInfoReportReason;
+ (BOOL)shouldAvoidFrequencyControl;
+ (Class)aAWEBigFontConfigReportAdapterClass;
+ (Class)aAWEBigFontModuleAdapterClass;
+ (BOOL)elderModeStorage;
+ (unsigned long long)getAndResetDelayElderModeType;

- (void)onServiceInit;
- (void)alertDialogDidDismiss:(id)a0;
- (BOOL)systemViewZoomModeOn;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)showConfirmAlertDialogBySwitchFontMode:(id)a0 followSystem:(BOOL)a1 title:(id)a2 message:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5 enterFrom:(id)a6;
- (void)showConfirmAlertDialogBySwitchElderMode:(BOOL)a0 title:(id)a1 message:(id)a2 confirmBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 enterFrom:(id)a5;
- (void)showConfirmAlertDialogWithTitle:(id)a0 message:(id)a1 confirmBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 enterFrom:(id)a4;
- (id)aAWEBigFontConfigReportAdapter;
- (id)aAWEBigFontModuleAdapter;
- (void)syncElderModeToServer;
- (void)shouldTrackToday:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
