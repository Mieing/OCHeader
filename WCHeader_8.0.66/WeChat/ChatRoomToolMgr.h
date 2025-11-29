@class NSDictionary, ChatRoomFamilyEdcationDataPB, NSRecursiveLock;

@interface ChatRoomToolMgr : MMObject <IGroupMgrExt, IMsgExt> {
    NSRecursiveLock *m_oLock;
    NSDictionary *m_nativeWeAppIconUrlDic;
    NSDictionary *m_nativeWeAppNickNameDic;
    ChatRoomFamilyEdcationDataPB *m_chatRoomFamilyEdcationData;
}

- (id)init;
- (void)initRegister;
- (void)initData;
- (BOOL)isNativeWeApp:(id)a0;
- (BOOL)isNativeWeAppWithAppUserName:(id)a0;
- (id)getIconUrlWithAppUserName:(id)a0;
- (id)getNickNameWithAppUserName:(id)a0;
- (id)getNativeWeAppInfoList;
- (BOOL)isWeAppMsgWithMessageWrap:(id)a0;
- (id)genChatRoomToolWeAppInfoWithMessageWrap:(id)a0;
- (BOOL)checkUpdateFamilyChatRoomtToolHadNeedGetContactDetail:(id)a0;
- (void)setUpdateFamilyChatRoomtToolHadGetContactDetail:(id)a0;
- (id)getMMKVUpdateChatRoomtToolWeAppHadGetContactArKey;
- (BOOL)updateChatRoomtToolWeAppInfoListWithUserName:(id)a0 weAppInfoList:(id)a1;
- (id)getWeAppInfoListWithUserName:(id)a0;
- (void)updateChatRoomtToolWeAppInfoListFromRoomToolsWxApp:(id)a0 roomToolsWxApp:(id)a1;
- (BOOL)isC2CAAMsgWrap:(id)a0;
- (id)getNativeChatRoomToolWeAppInfo:(id)a0;
- (void)reportChatRoomToolAttachmentExposureWithGroupUserName:(id)a0;
- (void)reportChatRoomToolAttachmentClickWithGroupUserName:(id)a0 andTopCount:(long long)a1 andUsedCount:(long long)a2 topAppListStr:(id)a3 usedAppListStr:(id)a4;
- (void)reportChatRoomToolClickWeApptWithGroupUserName:(id)a0 weAppInfo:(id)a1 isTop:(BOOL)a2;
- (void)reportChatRoomToolEditWithGroupUserName:(id)a0 andExitType:(unsigned long long)a1 andTopBefore:(long long)a2 andTopAfter:(long long)a3;
- (long long)getGroupRoleWithGroupUserName:(id)a0;
- (void)onUpdateChatRoomtToolWeAppInfoListWithUserName:(id)a0 roomToolsWxApps:(id)a1 withResult:(unsigned int)a2 errorMsg:(id)a3;
- (void).cxx_destruct;

@end
