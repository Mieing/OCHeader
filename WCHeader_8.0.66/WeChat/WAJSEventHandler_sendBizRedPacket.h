@class NSDictionary, NSString;

@interface WAJSEventHandler_sendBizRedPacket : WAJSEventHandler_BaseEvent <WCRedEnvWeAppDelegate>

@property (retain, nonatomic) NSDictionary *dicParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)getRedEnvParam;
- (void)onRedEnvSuccess:(id)a0;
- (void)onRedEnvCancel;
- (void)onRedEnvFail:(id)a0;
- (void).cxx_destruct;

@end
