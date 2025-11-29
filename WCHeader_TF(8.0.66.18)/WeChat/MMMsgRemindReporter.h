@class MMTimer, NSMutableSet, NSString;

@interface MMMsgRemindReporter : MMUserService <IMMNewSessionMgrExt, MMServiceProtocol>

@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL isRecording;
@property (retain, nonatomic) NSMutableSet *recordSessions;
@property (nonatomic) BOOL hasLeavePageAtRecording;
@property (retain, nonatomic) NSString *currentSessionName;
@property (nonatomic) unsigned int startRecordTime;
@property (nonatomic) unsigned int newMsgEndTime;
@property (nonatomic) long long newMsgCount;
@property (nonatomic) long long pageType;
@property (nonatomic) BOOL hasBackToMainFrame;
@property (nonatomic) BOOL hasEnterRemindContact;
@property (nonatomic) unsigned int enterMainFrameTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)didEnterMainFrame;
- (void)didLeaveCurrentPage;
- (void)didEnterSession:(id)a0;
- (void)onNewMsgArriving:(id)a0 NotifyFlag:(long long)a1;
- (void)startRecordFlowAtSession:(id)a0;
- (void)stopRecordFlow;
- (void)stopRecordNewMsg;
- (void)recordNewMsgAtSession:(id)a0;
- (void)resetReportData;
- (void)stopTimer;
- (void)doReport;
- (void).cxx_destruct;

@end
