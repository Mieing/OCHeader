@class NSString, NSMutableDictionary, NSObject;
@protocol WCGroupMgrExt;

@interface WCGroupMgr : MMObject <PBMessageObserverDelegate> {
    BOOL m_bMemCacheNeedReload;
    NSMutableDictionary *m_groups;
}

@property (retain, nonatomic) NSString *m_fromUsrName;
@property (retain, nonatomic) NSString *m_initFromPath;
@property (nonatomic) unsigned int m_lastUpdateAllGroupsTime;
@property (weak, nonatomic) NSObject<WCGroupMgrExt> *m_delegate;

- (id)pathForGroupData;
- (void)tryLoadData;
- (void)saveData;
- (void)clearMemoryCache;
- (void)clearMD5;
- (id)init;
- (void)dealloc;
- (id)getAllGroups;
- (id)getGroupByID:(id)a0;
- (void)updateAllGroups;
- (BOOL)canUpdateAllGroups;
- (void)localDeleteAllGroups;
- (void)deleteGroup:(id)a0;
- (void)addMembers:(id)a0 toGroup:(id)a1 withScene:(long long)a2;
- (void)removeMembers:(id)a0 fromGroup:(id)a1 withScene:(long long)a2;
- (BOOL)tryFuzzDefaultGroup;
- (void)doGroupOp:(unsigned int)a0 onGroup:(id)a1 withGroupName:(id)a2;
- (void)doGroupMemberOp:(unsigned int)a0 onGroup:(id)a1 withGroupName:(id)a2 withMemberList:(id)a3;
- (void)doGroupMemberOp:(unsigned int)a0 onGroup:(id)a1 withGroupName:(id)a2 withMemberList:(id)a3 withScene:(long long)a4;
- (void)doGroupListOp:(unsigned int)a0 withMD5:(id)a1;
- (void)onGroupOpReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGroupMemberOpReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGroupListReturn:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
