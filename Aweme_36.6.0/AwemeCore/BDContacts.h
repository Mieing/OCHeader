@class BDContactsKit, BDContactsManager;

@interface BDContacts : NSObject

@property (retain, nonatomic) BDContactsKit *contacts;
@property (retain, nonatomic) BDContactsManager *manager;

+ (id)validatePhoneNumber:(id)a0;
+ (id)sharedInstance;

- (unsigned long long)deviceContactsAccessStatus;
- (unsigned long long)userContactsAccessStatusWithUserID:(id)a0;
- (void)updateContactsAccessGranted:(BOOL)a0 userID:(id)a1;
- (void)checkUserContactsAccessStatusWithUserID:(id)a0;
- (id)localNameForKey:(id)a0;
- (long long)localContactsPermitCount;
- (BOOL)localUserAccessIsGrantedWithUserID:(id)a0;
- (unsigned long long)lastDevieceAccessIsGranted;
- (void)updateLastDevieceContactsAccessGranted:(BOOL)a0;
- (void)uploadContactsWithRequestUrl:(id)a0 paramsDict:(id)a1 headField:(id)a2 needEncrypt:(BOOL)a3 completion:(id /* block */)a4;
- (id)contactsInfoForKey:(id)a0;
- (void)requestDeviceContactsAccessWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)uploadContactsWithRequestUrl:(id)a0 paramsDict:(id)a1 completion:(id /* block */)a2;
- (void)uploadContactsWithModel:(id)a0 completion:(id /* block */)a1;
- (id)localContactsInfoForKeysList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationWillTerminate;

@end
