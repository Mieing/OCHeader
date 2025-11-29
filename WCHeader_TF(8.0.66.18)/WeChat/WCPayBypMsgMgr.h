@class NSString;

@interface WCPayBypMsgMgr : MMUserService <IExptServiceExt, IMsgExt, MMKernelExt, MMServiceProtocol>

@property (nonatomic) BOOL enbalePayByp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)checkAndReportBypPayMsg:(id)a0;
- (void)onExptItemListChange;
- (void)reportSyncPayBusinessMsgIfNecessary:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)reportBypMsgWithMsgWrap:(id)a0 reportScene:(unsigned int)a1;

@end
