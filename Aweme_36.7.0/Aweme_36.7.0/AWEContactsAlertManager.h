@class NSString;

@interface AWEContactsAlertManager : NSObject <AWEContactsAlert>

@property (nonatomic) BOOL needShowContactBubble;
@property (nonatomic) BOOL hasUploadedAddressBook;
@property (nonatomic) BOOL isShowingAddressListAlert;
@property (nonatomic) BOOL isShowingContactAlert;
@property (nonatomic) BOOL canPlayVideoWhenShowingAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAlertContactAfterPhoneBindedOnViewController:(id)a0 needUpload:(BOOL)a1;
+ (id)lastShowDate;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (BOOL)shouldAdaptToLimitedAccessOfiOS18InContacts;
+ (void)showAddressBookAccessDeniedAlertVCWithTrackParams:(id)a0 block:(id /* block */)a1;
+ (void)showPassiveAddressBookAccessDeniedAlertVCWithTrackParams:(id)a0 block:(id /* block */)a1;
+ (BOOL)enableContactAlert;
+ (BOOL)checkUploadContactsAlertShowTimes;
+ (BOOL)checkUploadContactsAlertShowDate;
+ (BOOL)isReachRefuseContactsTimes;
+ (id)lastTriggerAlertImpressionDate;
+ (long long)_convertIdToInt:(id)a0;
+ (id)frozenDate;
+ (void)resetRefuseTime;
+ (void)clickToJumpSystemPrivacySettings:(id)a0;
+ (BOOL)enableShowAlertContact;
+ (void)showAlertContactOnViewController:(id)a0 needUpload:(BOOL)a1;
+ (void)showContactsFakeLogoSystemAlert:(id)a0 block:(id /* block */)a1;
+ (BOOL)shouldShowLimitedAccess;
+ (void)showAlertContactAfterPhoneBinded:(BOOL)a0;
+ (BOOL)enableShowColdLaunchContactAlert;
+ (void)saveRefuseContactsTimes;
+ (BOOL)canShowTriggerAlert;
+ (void)showTriggerAlertWithParams:(id)a0;
+ (void)addActiveAlertRefuseTimes;
+ (void)showDouyinContactAuthAlertViewWithFromVC:(id)a0 trackParams:(id)a1 actionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 closeBlock:(id /* block */)a4;
+ (id)contentSheetWithInfoPanelWithFromVC:(id)a0 trackParams:(id)a1 actionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 closeBlock:(id /* block */)a4;
+ (void)showAlertViewControllerInFeedWithParamsDict:(id)a0;
+ (id)sharedInstance;

- (id)aAFDServiceDOUYINDSAdapter;
- (void)updateUploadContactsShowSigns:(BOOL)a0;
- (void)updateUploadContactsShowSigns;
- (void)checkFindFriendsShouldShowUploadAlert;
- (BOOL)disableContactsNotice;
- (BOOL)shouldShowContactBubble;
- (id)generateStorageKey:(id)a0;
- (id)p_currentDate;
- (id)init;

@end
