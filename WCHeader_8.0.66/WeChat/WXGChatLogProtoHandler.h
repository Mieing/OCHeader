@class NSData, NSMutableArray;

@interface WXGChatLogProtoHandler : NSObject {
    NSData *m_cryptKey;
    BOOL m_useCRC;
    NSMutableArray *m_arrRecvSeq;
}

+ (id)getChatLogDeviceID;

- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 AndShouldCRC:(BOOL)a1;
- (id)pack:(id)a0 type:(int)a1;
- (id)unpack:(id)a0 type:(int *)a1;
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (unsigned int)generateSendSequence;
- (unsigned int)generateReceviveSequence;
- (id)getDestBodyData:(id)a0 dataType:(int)a1 isPack:(BOOL)a2;
- (BOOL)verifyChecksum:(id)a0 andChecksum:(int)a1;
- (id)getCommandRequestPkgWithID:(int)a0 withData:(id)a1;
- (id)getCommandResponsePkgWithID:(int)a0;
- (id)getAuthRequestPkg:(id)a0 backupID:(id)a1 version:(long long)a2 type:(long long)a3 supportExt:(long long)a4 needToken:(long long)a5;
- (id)getSecondAuthRequestPkg:(id)a0 backupID:(id)a1 version:(long long)a2 type:(long long)a3 supportExt:(long long)a4 needToken:(long long)a5;
- (id)getAuthResponsePkgWithOk:(id)a0 withbackupID:(id)a1 withStatus:(int)a2 withVersion:(long long)a3 withType:(long long)a4 withSupportKv:(long long)a5;
- (id)getStartRequestPkgWithBakID:(id)a0 sessionCount:(unsigned long long)a1 msgCount:(unsigned long long)a2 dataSize:(unsigned long long)a3 transferType:(int)a4 sessionID:(id)a5;
- (id)getStartResponsePkgWithBakID:(id)a0 withTotalCount:(unsigned long long)a1 withTotalSize:(unsigned long long)a2 withStatus:(int)a3 withNetworkState:(unsigned int)a4 withTransferType:(int)a5;
- (id)getStartResponsePkgWithBakID:(id)a0 withStatus:(int)a1;
- (id)getRequestSessionPkgWithSessionNameArray:(id)a0 withTimeArray:(id)a1;
- (id)getSessionTypeRequest;
- (id)getSessionTypeResponseWithType:(int)a0;
- (id)getRequestSessionResponsePkgWithSessionNameArray:(id)a0 withTimeArray:(id)a1;
- (id)getFinishRequestPkg:(id)a0 analyseInfo:(id)a1;
- (id)getDataPushRequestPkg:(id)a0;
- (id)getDataPushResponsePkg:(id)a0;
- (id)getPacketBackupDataTagPkg:(id)a0;
- (id)getPacketBackupDataTagResponsePkg:(id)a0;
- (id)getFilterRequestPkg:(id)a0;
- (id)getFilterResponsePkg:(id)a0;
- (id)getCancelRequestWithID:(id)a0;
- (id)getHeartBeatRequestPkgWithAck:(unsigned long long)a0;
- (id)getHeartBeatResPkgWithAck:(unsigned long long)a0;
- (id)getChooseUserReqWithUserName:(id)a0;
- (id)getChooseUserRespWithResult:(int)a0;
- (void).cxx_destruct;

@end
