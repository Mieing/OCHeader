@interface WAJSEventHandler_OpenVoiceBase : WAJSEventHandler_BaseEvent

- (void)onStartRecord;
- (void)onStopRecord;
- (int)convertFromNativeErrCodeToUserErrCodeJoin:(int)a0 errCode:(int)a1;
- (void)addErrCodeToRet:(id)a0 withErrCode:(int)a1;
- (id)convertFromMemberArrayToDic:(id)a0;
- (BOOL)isGame;
- (struct ReasonModel { id x0; int x1; })generateReasonFromVal:(int)a0;
- (id)parseJoinRoomInfo:(id)a0;

@end
