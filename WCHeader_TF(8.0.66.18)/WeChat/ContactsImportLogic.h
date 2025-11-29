@class NSString, OrderedDictionary, NSArray;
@protocol ContactsImportLogicDelegate;

@interface ContactsImportLogic : NSObject <PBMessageObserverDelegate>

@property (nonatomic) BOOL hasBindedOldWechatAccount;
@property (nonatomic) BOOL hasFetchedContactList;
@property (retain, nonatomic) NSString *qrCode;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *oldUsername;
@property (retain, nonatomic) NSString *oldAlias;
@property (nonatomic) unsigned int clientSequence;
@property (retain, nonatomic) OrderedDictionary *encryptedUsernameToOldAccountContactMap;
@property (weak, nonatomic) id<ContactsImportLogicDelegate> delegate;
@property (readonly, nonatomic) NSArray *oldAccountContacts;

+ (void)fixContactStatus:(id)a0;
+ (id)decodeOrCreateEncryptedUsernameToOldAccountContactMapFromFilePath:(id)a0 maxClientSequence:(unsigned int *)a1;
+ (void)encodeEncryptedUsernameToOldAccountContactMap:(id)a0 toFilePath:(id)a1;
+ (id)pathForOldAccountContactsCacheForUsername:(id)a0;

- (id)initWithQRCode:(id)a0;
- (void)bindOldWechatAccount;
- (void)onGetBindOldWechatAccountCgiResponse:(id)a0;
- (void)callBindOldAccountSucceedDelegate;
- (void)callBindOldAccountFailDelegateWithErrorMessage:(id)a0 canRecover:(BOOL)a1;
- (void)fetchContactList;
- (void)internalFetchContactList;
- (void)onGetFetchContactListCgiResponse:(id)a0;
- (void)callFetchContactListFailDelegate;
- (void)callFetchContactListSucceedDelegateWithAppendContactList:(id)a0 isFinished:(BOOL)a1;
- (id)getOldAccountContactForEncryptedUsername:(id)a0;
- (void)saveContactList;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
