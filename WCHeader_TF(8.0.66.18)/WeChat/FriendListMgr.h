@class NSString, NSMutableSet;

@interface FriendListMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    NSMutableSet *m_downliadingPackageLists;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFriendListPath:(id)a0;
- (id)LoadFriendListArchive:(id)a0;
- (void)SaveFriendListArchive:(id)a0 packageListArchive:(id)a1;
- (id)getFriendListForType:(unsigned long long)a0;
- (void)clearFriendListForType:(unsigned long long)a0;
- (BOOL)downloadFriendListForType:(unsigned long long)a0 InScene:(unsigned long long)a1;
- (void)onFriendListSynced:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
