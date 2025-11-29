@class CNContactStore, NSArray, NSRecursiveLock;
@protocol WCOutAddressBookLogicDelegate;

@interface WCOutAddressBookLogic : MMObject {
    CNContactStore *m_cnContactStore;
    BOOL m_isLoadingAddressBook;
    BOOL m_localAddressBookChanged;
    NSArray *m_phoneContacts;
    double m_lastUpdateAddressBookTime;
    NSRecursiveLock *m_oLock;
}

@property (readonly, nonatomic) unsigned int addressAuthStatus;
@property (weak, nonatomic) id<WCOutAddressBookLogicDelegate> delegate;
@property (readonly, nonatomic) BOOL hasLoadPhoneContacts;

- (void)dealloc;
- (id)init;
- (void)refetchAddressBook;
- (void)requestAccessForContactsDone:(BOOL)a0;
- (void)loadAddressBook;
- (id)getPhoneContacts;
- (BOOL)addressBookStatusIsDenied;
- (BOOL)canSyncAddressBook;
- (void)onContactStoreDidChange:(id)a0;
- (void)tryLoad;
- (void)loadAsyncNeedUpdate:(BOOL)a0;
- (void)addCacheWithPhoneContacts:(id)a0;
- (void)localAddressBookChanged;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
