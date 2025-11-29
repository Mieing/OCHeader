@class NSString, GroupNoticeDB;

@interface GroupNoticeMgr : MMUserService <GroupNoticeUploadExt, IMsgExt, IGroupMgrExt, MMServiceProtocol> {
    id /* block */ m_updateCompletionHandler;
}

@property (retain, nonatomic) GroupNoticeDB *groupNoticeDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)SetChatRoomDesc:(id)a0 Item:(id)a1 Flag:(unsigned int)a2;
- (void)deleteResourceWithMsg:(id)a0;
- (void)deleteResourceWithChatName:(id)a0;
- (long long)getMaxResourceSize;
- (BOOL)canMigrateResource;
- (BOOL)isHistoryItem:(id)a0;
- (id)getCurrentItem:(id)a0;
- (void)onUploadGroupNoticeItem:(id)a0 success:(BOOL)a1;
- (void)addRelationWithSourceId:(id)a0 msgLocalId:(unsigned int)a1 userName:(id)a2;
- (unsigned int)getMsgLocalIdWithSourceId:(id)a0;
- (void)removeRelationWithSourceId:(id)a0;
- (void)removeRelationWithUserName:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (BOOL)canRevokeMsg;
- (void)revokeAnnouncementMsg:(id)a0;
- (void)onRevokeMsgSuccess:(id)a0;
- (id)getRevokeMsgByAnnouncementId:(id)a0;
- (id)getRevokeMsgBySourceId:(id)a0;
- (BOOL)insertRevokeMessage:(id)a0;
- (BOOL)removeOldRevokeMessagesBefore:(unsigned int)a0;
- (void)OnGetChatRoomInfo:(id)a0 Info:(id)a1 showBanner:(BOOL)a2;
- (void)p_cleanTmpResource:(id)a0;
- (void).cxx_destruct;

@end
