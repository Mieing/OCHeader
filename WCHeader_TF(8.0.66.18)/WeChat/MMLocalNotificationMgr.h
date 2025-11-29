@class NSString, MemoryMappedKV;

@interface MMLocalNotificationMgr : MMRootService <IMsgExt, IMsgRevokeExt, VoIPPushKitExt, MMServiceProtocol> {
    BOOL m_isInBackground;
    MemoryMappedKV *m_pushInfos;
}

@property (nonatomic) BOOL isCommunicationNotificationClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)clearPushInfos;
- (void)updateExtensionConfig;
- (BOOL)isInVoip;
- (void)OnShowPush:(id)a0 isAlwaysShow:(BOOL)a1;
- (BOOL)isSpecialBusinessCondition:(id)a0;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1 pushContent:(id)a2;
- (void)onReceiveVoIPPushInfo:(id)a0;
- (void)checkNewSyncFail;
- (void)doVoipPushIDKeyReport;
- (void)doVoipDelayReport;
- (void)showPushWithMessageWrap:(id)a0 fireDate:(id)a1 isFromVoipPush:(BOOL)a2;
- (void)revokePushWithMessageWrap:(id)a0 isFromVoipPush:(BOOL)a1;
- (void)showPushWithMessageWrap:(id)a0 identifier:(id)a1 fireDate:(id)a2 isFromVoipPush:(BOOL)a3 shouldSilent:(BOOL)a4;
- (id)notificationInfoForMessage:(id)a0 withEnabledNotificationSettings:(id)a1 isFromVoipPush:(BOOL)a2;
- (id)messageWrapFromPushInfo:(id)a0;
- (id)notificaitonIdentifier:(long long)a0;
- (void).cxx_destruct;

@end
