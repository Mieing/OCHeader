@class CXCallController, NSMutableDictionary, NSUUID, MonoServiceMsg, NSDate, CXProvider, NSString;

@interface VoipCXMgr : MMUserService <MMKernelExt, MMServiceProtocol, CXProviderDelegate> {
    BOOL m_bHaveNotActionedEndCallRequest;
    BOOL m_bHaveAnsweredCall;
    BOOL m_bHaveAProcessingCall;
    BOOL m_bOutgoingCallHaveBeenAccepted;
}

@property (retain, nonatomic) CXCallController *cxController;
@property (retain, nonatomic) NSMutableDictionary *m_callFromDic;
@property (retain, nonatomic) NSMutableDictionary *m_callToDic;
@property (retain, nonatomic) NSDate *dateOfIncomingInvitationFromPushKit;
@property (nonatomic) BOOL noActionAfterEnteringForeground;
@property (nonatomic) unsigned long long roomID;
@property (nonatomic) BOOL isilink;
@property (retain, nonatomic) CXProvider *provider;
@property (retain, nonatomic) MonoServiceMsg *m_monoMsg;
@property (retain, nonatomic) NSUUID *m_uuid;
@property (retain, nonatomic) NSString *m_user;
@property (nonatomic) int m_callType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (BOOL)haveAProcessingCall;
- (BOOL)haveAnsweredCall;
- (unsigned long long)getRoomID;
- (void)requestAcceptCallTransactionWithRoom:(unsigned long long)a0;
- (void)requestEndCallTrans;
- (void)prepareForIncomingInvitationFromPushKit;
- (void)reportIncomingCallFromUser:(id)a0 ofType:(int)a1 withMsg:(id)a2 isPushKit:(BOOL)a3 displayName:(id)a4 completion:(id /* block */)a5;
- (void)reportCallEndedAtDate:(id)a0 reason:(long long)a1 roomID:(unsigned long long)a2;
- (void)providerDidReset:(id)a0;
- (void)provider:(id)a0 performStartCallAction:(id)a1;
- (void)provider:(id)a0 performAnswerCallAction:(id)a1;
- (void)provider:(id)a0 performEndCallAction:(id)a1;
- (void)provider:(id)a0 performSetHeldCallAction:(id)a1;
- (void)provider:(id)a0 performSetMutedCallAction:(id)a1;
- (void)provider:(id)a0 performSetGroupCallAction:(id)a1;
- (void)provider:(id)a0 performPlayDTMFCallAction:(id)a1;
- (void)provider:(id)a0 timedOutPerformingAction:(id)a1;
- (void)provider:(id)a0 didActivateAudioSession:(id)a1;
- (void)provider:(id)a0 didDeactivateAudioSession:(id)a1;
- (void)onAppBecomeActive;
- (void)onInitOK;
- (void)logCallKitErrorWithType:(unsigned long long)a0 andErrorMsg:(id)a1;
- (void).cxx_destruct;

@end
