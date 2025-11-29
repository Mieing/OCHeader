@class NSString, SessionForwardRecordDB;

@interface SessionForwardRecordLogic : NSObject <IMMNewSessionMgrExt, ForwardMessageLogicExt>

@property (retain, nonatomic) SessionForwardRecordDB *forwardRecordDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)recentForwardRecords;
- (void)onDeleteSessionOfUser:(id)a0;
- (void)onHideSessionWithUserName:(id)a0;
- (void)onShowSessionWithUserName:(id)a0;
- (void)onForwardMsgToContact:(id)a0 scene:(unsigned long long)a1;
- (void)recordForwardMsgWithContact:(id)a0 scene:(unsigned long long)a1;
- (void)resetForwardMsgWithContact:(id)a0;
- (void)deleteExpiredSessionForwardRecord;
- (void).cxx_destruct;

@end
