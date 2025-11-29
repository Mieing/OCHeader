@interface WAJSEventHandler_adOperateWXData : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)onResponseData:(id)a0;
- (void)endErrorWithMessage:(id)a0;
- (void)endErrorWithMessage:(id)a0 code:(int)a1;
- (void)endOKWithData:(id)a0;
- (void)endCancel;

@end
