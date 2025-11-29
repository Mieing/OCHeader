@class NSString, NSMutableDictionary;

@interface AddressBookFriendMgr : MMUserService <MMServiceProtocol, IFriendListMgrExt> {
    NSMutableDictionary *m_friends;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)LoadData;
- (id)getAddressBookFriends;
- (void)onFriendListUpdated:(id)a0 ErrorCode:(unsigned int)a1 Message:(id)a2;
- (BOOL)trySyncAddressBookFriends;
- (id)init;
- (void).cxx_destruct;

@end
