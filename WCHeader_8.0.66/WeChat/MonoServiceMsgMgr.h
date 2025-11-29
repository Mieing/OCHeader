@class NSString, VibrationRepeatObject, NSMutableArray, MonoServiceMsgHistory;

@interface MonoServiceMsgMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *m_queue;
@property (retain, nonatomic) MonoServiceMsgHistory *m_msgHistory;
@property (retain, nonatomic) NSMutableArray *m_logicArray;
@property (retain, nonatomic) MonoServiceMsgHistory *m_localNotificationHistory;
@property (retain, nonatomic) VibrationRepeatObject *m_vibrationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (id)init;
- (void)inQueueMsg:(id)a0;
- (void)addMsgLogic:(id)a0;
- (void)checkMsgQueue;
- (void)addCancelHistory:(id)a0;
- (void)showLocalNotificationWithMsg:(id)a0 repeatVibration:(BOOL)a1 silently:(BOOL)a2;
- (void)showLocalNotificationWithMsg:(id)a0 repeatVibration:(BOOL)a1;
- (void)showLocalNotificationByIlinkWithMsg:(id)a0 repeatVibration:(BOOL)a1 isCallkitAvailable:(BOOL)a2;
- (void)closeLocalNotificationWithMsg:(id)a0;
- (void)repeatInAppVibration;
- (void)repeatOutAppVibration;
- (void)stopInAppVibration;
- (void)internalCheckMsgQueue;
- (void)processMsg:(id)a0;
- (void)processCancelMsg:(id)a0;
- (BOOL)isSimuCallPreCheck:(id)a0;
- (void)processInviteMsg:(id)a0;
- (BOOL)isMonoServiceCheckingServer;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (void)didMonoServiceMsgReject;
- (id)historyMsgsWithServiceType:(id)a0 key:(id)a1;
- (id)localHistoryMsgsWithServiceType:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end
