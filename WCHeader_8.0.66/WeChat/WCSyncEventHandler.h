@interface WCSyncEventHandler : ProtobufEventHandler

- (void)onReveiceWCMessage:(id)a0;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (BOOL)hitNormalMessageForbidNotifyExp;
- (BOOL)ABtestControlNormalMessageNeedInsert:(id)a0;
- (void)reportForbidNotifyInfo:(id)a0;
- (unsigned long long)getFeedIdBySnsAction:(id)a0;

@end
