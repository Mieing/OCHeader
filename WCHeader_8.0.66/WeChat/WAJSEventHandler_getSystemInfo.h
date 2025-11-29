@interface WAJSEventHandler_getSystemInfo : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)fillAllInfo;
- (void)updatePrivateInfoIfNeeded:(id)a0;
- (void)makeWindowInfo:(id)a0 result:(id)a1;
- (void)copyInfo:(id)a0 from:(id)a1 to:(id)a2;
- (void)fillDeviceInfo;
- (void)fillWindowInfo;
- (void)fillAppBaseInfo;
- (void)fillOneInfo:(id)a0;
- (id)getSystemInfo;

@end
