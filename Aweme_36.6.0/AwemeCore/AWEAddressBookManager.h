@class NSString;

@interface AWEAddressBookManager : NSObject <AWEAddressBookManagerProtocol>

@property (nonatomic) BOOL didEnterBackground;
@property (nonatomic) unsigned long long cachedAuthority;
@property (copy, nonatomic) NSString *enterFromOnCallAddressBook;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)firstTimeFetchContactAfterLogin;
+ (BOOL)showBindPhoneView;
+ (id)sharedInstance;

- (id)localNameForKey:(id)a0;
- (BOOL)isPermissionGranted;
- (BOOL)enableShowContactGuideEntryWithEntryBDCert:(id)a0;
- (id)recommendReasonWithTemplateModel:(id)a0 originalString:(id)a1 userModel:(id)a2;
- (void)uploadContactsIfNeed;
- (unsigned long long)currentUserContactsAccess;
- (void)requestPermissionWithEnterFromStr:(id)a0 BDCert:(id)a1 trackParams:(id)a2 directSetGranted:(BOOL)a3 completion:(id /* block */)a4;
- (unsigned long long)paramsMediatorOfRequestPermissionWithBDCert:(id)a0 directSetGranted:(BOOL)a1;
- (void)requestSystemAccessWithEnterFromStr:(id)a0 BDCert:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (void)showDouyinAlertViewWithEnterFromStr:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (id)douyinAlertViewController:(id)a0 trackParams:(id)a1;
- (void)requestAndUploadWithModel:(id)a0 view:(id)a1 completion:(id /* block */)a2;
- (id)paramsMediatorOfRequestPermissionAndUploadContacts:(id)a0;
- (void)p_transferToAddressBookList:(id)a0 uploadOptionModel:(id)a1 onView:(id)a2 completion:(id /* block */)a3;
- (void)p_transferToAddressBookListForRequest:(id)a0 trackParams:(id)a1 loadBDCert:(id)a2 completion:(id /* block */)a3;
- (void)transferWithUrlString:(id)a0;
- (void)uploadContactsWithLoadBDCert:(id)a0 alogParams:(id)a1 uploadScene:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)recommendReasonWithTemplateModel:(id)a0 originalString:(id)a1 context:(id)a2;
- (id)localNameArrayForKeyList:(id)a0;
- (void)uploadAddressBookOnView:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)requestPermissionWithDirectSetGranted:(BOOL)a0 requestBDCert:(id)a1 completion:(id /* block */)a2;
- (void)requestSystemAccessWithEnterFromStr:(id)a0 BDCert:(id)a1 trackParams:(id)a2 luckydogCompletion:(id /* block */)a3;
- (void)requestAndUploadAddressBook:(BOOL)a0 requestBDCert:(id)a1 loadBDCert:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)requestSystemPermissionAndUploadContacts:(id)a0 requestCert:(id)a1 loadCert:(id)a2 completion:(id /* block */)a3;
- (BOOL)isIllegalRecommendReasonWithTemplateModel:(id)a0 originalString:(id)a1 context:(id)a2;
- (void)handleContactTappedWithEnterFrom:(id)a0 requestBDCert:(id)a1 loadBDCert:(id)a2;
- (void)saveEnterFromOnCallAddressBook:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;

@end
