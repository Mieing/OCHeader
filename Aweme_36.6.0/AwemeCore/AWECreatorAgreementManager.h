@class NSString, AWECreatorAgreementAlertView, AWEPromoteSettings;

@interface AWECreatorAgreementManager : NSObject <AWEAppAwemeSettingMessage, AWEPublishTaskMessage, AWECreatorAgreementManagerProtocol>

@property (nonatomic) BOOL needShowAuthorAgreeAlert;
@property (nonatomic) BOOL enteredLinkWebVC;
@property (retain, nonatomic) AWECreatorAgreementAlertView *alert;
@property (retain, nonatomic) AWEPromoteSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)awemeSettingDidChange;
- (void)_updateAlertView;
- (void)_agreeForCreatorTerm;
- (void)_cancelForCreatorTerm;
- (void)_recordPopupWithConfirmStatus:(BOOL)a0;
- (void)_transferToTermsUrl;
- (BOOL)_checkPopupConditionGivenMaxPopupTimes:(unsigned long long)a0 popupIntervalDays:(unsigned long long)a1;
- (void)_markNeedShowAuthorAgreeAlert;
- (BOOL)shouldCheckWhetherShowAlertViewWithTask:(id)a0;
- (void)checkWhetherShowAlertView;
- (void)showAlertViewWhenEnteredAgreementWebViewController;
- (void).cxx_destruct;
- (id)init;
- (void)showAlertView;
- (void)dealloc;

@end
