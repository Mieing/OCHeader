@class NSArray, BDContactsKit;

@interface BDContactsManager : NSObject

@property (copy, nonatomic) NSArray *localAddressModels;
@property (retain, nonatomic) BDContactsKit *contacts;

+ (id)validatePhoneNumber:(id)a0;

- (id)simplifyAddressBookModelFromContacts:(id)a0;
- (void)updateContactsCountStorage:(id)a0 count:(long long)a1;
- (void)uploadContactsWithContent:(id)a0 needEncrypt:(long long)a1 paramsDict:(id)a2 requestUrl:(id)a3 headerField:(id)a4 localModels:(id)a5 completion:(id /* block */)a6;
- (void)loadContactsWithNameAndPhoneWithFilterBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (long long)contactsLimitCount;
- (id)contactsArrayFromContacts:(id)a0;
- (id)updateKeyList:(id)a0 needEncrypt:(long long)a1;
- (void)updateLocalContactsWithKeyList:(id)a0 localModels:(id)a1;
- (BOOL)isDuplicate:(id)a0 phoneNumber:(id)a1;
- (void)uploadContactsWithRequestUrl:(id)a0 needEncrypt:(long long)a1 paramsDict:(id)a2 headerField:(id)a3 filterBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)loadContactsWithNameAndPhone:(id /* block */)a0;
- (id)localContactsModels;
- (void).cxx_destruct;

@end
