@class WCCgiBlockHelper, NSMutableArray, CMessageWrap;
@protocol BypSendMessageMgrDelegate;

@interface BypSendMessageMgr : NSObject <IMsgExt>

@property (retain, nonatomic) NSMutableArray *sendMsgQueue;
@property (retain, nonatomic) CMessageWrap *curSendMsg;
@property (retain, nonatomic) WCCgiBlockHelper *curCgiBlockHelper;
@property (weak, nonatomic) id<BypSendMessageMgrDelegate> delegate;

+ (int)bizTypeForMsgWrap:(id)a0;

- (id)init;
- (BOOL)IsMsgInSendQueue:(id)a0;
- (void)StartSendMsg:(id)a0;
- (void)StopSendMsg:(id)a0;
- (void)StopSendMsgByChatName:(id)a0;
- (void)CheckSendQueue;
- (BOOL)createSendMsgEvent:(id)a0;
- (void)stopCurSendMsg;
- (void)clearCurSendMsg;
- (void)onSendSuccessedWithSvrId:(long long)a0;
- (void)onSendFailed;
- (void)modMsgAfterSendFailedWithMsgWrap:(id)a0;
- (BOOL)shouldModContentAfterSendWithMsgWrap:(id)a0;
- (id)createImagePackWithMsg:(id)a0;
- (id)createTextPackWithMsg:(id)a0;
- (id)createVideoPackWithMsg:(id)a0;
- (id)createAppmsgPackWithMsg:(id)a0;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
