@class NSString, NSMutableSet;

@interface MainFrameHideSessionReporter : MMUserService <IMsgExt, IMMNewSessionMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSString *enterChatName;
@property (nonatomic) long long enterScene;
@property (nonatomic) unsigned long long enterChatTime;
@property (nonatomic) long long enterChatType;
@property (nonatomic) long long exitHiddenStatus;
@property (retain, nonatomic) NSMutableSet *visibleSessionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBatchContactExpose:(id)a0;
- (void)enterChatName:(id)a0 scene:(long long)a1;
- (void)enterSession:(id)a0 scene:(long long)a1;
- (void)exitSession:(id)a0;
- (void)onSessionShow:(id)a0 showUpScene:(long long)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)onHideSessionWithUserName:(id)a0;
- (void)logSessionExpose:(long long)a0 chatname:(id)a1 sessionType:(long long)a2;
- (long long)getReportSessionTypeFor:(id)a0;
- (void).cxx_destruct;

@end
