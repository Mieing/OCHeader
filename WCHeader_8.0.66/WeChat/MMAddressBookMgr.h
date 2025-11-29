@class NSString, NSMutableDictionary, NSMutableArray, AddressBookArchive;

@interface MMAddressBookMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol, IMsgExt> {
    NSMutableArray *m_phoneContacts;
    NSMutableDictionary *m_phoneAddressBooks;
    NSMutableDictionary *m_emailAddressBooks;
    AddressBookArchive *m_addressBookArchive;
    BOOL m_isSyningAddressBook;
    BOOL m_isFirstSync;
    BOOL m_bLocalAddressBookChanged;
    NSString *m_curLang;
    NSMutableArray *m_countryCodes;
    BOOL m_bHasLoadAddressBook;
}

@property (nonatomic) BOOL m_bTempCanSyncAddressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validPhoneNumber:(id)a0;
+ (id)validEmail:(id)a0;
+ (void)InternalLoadMobile:(id)a0 Email:(id)a1 PhoneContacts:(id)a2;
+ (void)InternalLoadMobile:(id)a0 Email:(id)a1 PhoneContacts:(id)a2 AuthScene:(unsigned long long)a3;
+ (id)getDefaultPhoneLabel;
+ (BOOL)isBindMobile;
+ (BOOL)isMobileVerifiedForStatic;
+ (id)loadCountryWrapFromStr:(id)a0 lang:(id)a1 locale:(id)a2;

- (id)newContactStore;
- (BOOL)isAddressBookLoaded;
- (void)addToCacheInMainThreadWithPhone:(id)a0 email:(id)a1 phoneContacts:(id)a2;
- (void)doLoadFromDBUseBlock:(BOOL)a0;
- (void)load;
- (void)onContactStoreDidChange:(id)a0;
- (void)tryLoad;
- (void)onServiceInit;
- (id)getAddressBookForPhone:(id)a0;
- (BOOL)CheckPhoneInAddressBook:(id)a0;
- (id)getNickNameForPhone:(id)a0;
- (id)getPhoneContacts;
- (BOOL)SaveAddressBookArchive;
- (void)LoadAddressBookArchive;
- (void)updateUploadedList;
- (id)getNewPhones;
- (id)getNewMD5Emails;
- (void)uploadNewPhones:(id)a0 withNewMD5Emails:(id)a1;
- (void)trySyncAddressBook;
- (void)clearLocalSnapshot;
- (void)safeSyncedData:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)isMobileVerified;
- (BOOL)canSyncAddressBook;
- (BOOL)canSyncAddressBookWithShowLog:(BOOL)a0;
- (void)setCanSyncAddressBook:(BOOL)a0;
- (id)getAllCountryCode;
- (id)findCountryWrapFromCountryCode:(id)a0;
- (id)findCountryWrapFromISOCountryCode:(id)a0;
- (id)getCurCountryCode;
- (void)dealloc;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (unsigned int)getAddressBookStatus;
- (unsigned int)getAddressBookStatusForAuthScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
