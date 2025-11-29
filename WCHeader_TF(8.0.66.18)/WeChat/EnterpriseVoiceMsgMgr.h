@class NSMutableDictionary;
@protocol EnterpriseVoiceMsgMgrDelegate;

@interface EnterpriseVoiceMsgMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableDictionary *_dicMsgSource;
    BOOL _isContinueWrite;
}

@property (weak, nonatomic) id<EnterpriseVoiceMsgMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)wrtieFileOfVoiceMsg:(id)a0;
- (BOOL)downloadVoiceData:(id)a0;
- (BOOL)CreateDownloadVoiceEvent:(id)a0 withMsg:(id)a1;
- (BOOL)resendVoiceMsg:(id)a0;
- (BOOL)sendVoiceMsgByUserData:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)genKeyWithChatUsrName:(id)a0 svrID:(unsigned long long)a1;
- (void)pushMsgSource:(id)a0;
- (id)popMsgSource:(id)a0;
- (BOOL)uploadVoice:(id)a0;
- (void)handleSendVoiceMsgSuc:(id)a0;
- (void)handleSendVoiceMsgFail:(id)a0;
- (BOOL)WriteAudioFile:(id)a0 Offset:(unsigned int)a1 Data:(id)a2;
- (void)handleDownloadVoiceMsgSuc:(id)a0;
- (void).cxx_destruct;

@end
