@class AWEAlertContext, NSString, AWEUGMaterialAdvertisingInfo, NSURL, AWEUGMaterialAdNormalizePopupModel, NSDictionary, AWEDLMSession, AWEAlertCallbackWrapper, DUXAlertDialog;

@interface AWEUGMaterialAdvertisingAlertManager : NSObject <AWEMessageReachPopViewProtocol>

@property (nonatomic) BOOL needBlockAlertManager;
@property (nonatomic) BOOL canShowMaterialAdPopViewByDeepLink;
@property (retain, nonatomic) AWEUGMaterialAdNormalizePopupModel *popupInfo;
@property (retain, nonatomic) AWEAlertCallbackWrapper *alertCallback;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (retain, nonatomic) DUXAlertDialog *normalizePopup;
@property (retain, nonatomic) AWEUGMaterialAdvertisingInfo *respInfo;
@property (retain, nonatomic) AWEDLMSession *session;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (retain, nonatomic) NSURL *deeplinkURL;
@property (retain, nonatomic) NSDictionary *guidePopviewInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)onAlertCanceledWithContext:(id)a0;
- (id)mr_accessIDForEvent:(id)a0;
- (void)noticeWillShowMaterialAdPopView;
- (id)cacheNormalizePopupsInfo:(id)a0 extraParams:(id)a1;
- (void)showMaterialAdvertisingPopViewWithRespInfo:(id)a0 deeplinkSession:(id)a1 sourceType:(unsigned long long)a2 prepareBlock:(id /* block */)a3;
- (void)cancelShowMaterialAdPopView;
- (void)_handleDeepLinkSessionTimeout:(id)a0;
- (void)showNormalizePopupWithPopupInfo:(id)a0;
- (void)checkPopupAbilityForConfirmAction:(id)a0 completion:(id /* block */)a1;
- (void)trackAlertEventWithAction:(id)a0 guidePopupInfo:(id)a1;
- (void)showNormalizePopupByDeepLink;
- (void)showGuidePopupWithInfo:(id)a0;
- (void).cxx_destruct;
- (void)_reset;

@end
