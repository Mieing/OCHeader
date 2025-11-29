@class NSString;

@interface AWEContactsServiceImpl : NSObject <AWEContactsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)deviceContactsAccessStatus;
- (unsigned long long)userContactsAccessStatusWithUserID:(id)a0;
- (void)requestAccessWithUserID:(id)a0 BDCertName:(id)a1 completion:(id /* block */)a2;
- (void)updateContactsAccessGranted:(BOOL)a0 userID:(id)a1;
- (void)loadAndUploadWithWithBDCert:(id)a0 uploadScene:(unsigned long long)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
- (BOOL)isUserContactsAccessAuthorizedWithUserID:(id)a0;
- (void)checkUserContactsAccessStatusWithUserID:(id)a0;
- (id)validateContactsWithBDCert:(id)a0 method:(long long)a1;
- (id)localNameForKey:(id)a0;
- (long long)localContactsPermitCount;
- (id)localContactsInfoForKeysList:(id)a0;
- (id)p_validateWithBDCert:(id)a0 method:(long long)a1;
- (void)monitorAwemeUploadSwordContacts:(id)a0;
- (id)init;

@end
