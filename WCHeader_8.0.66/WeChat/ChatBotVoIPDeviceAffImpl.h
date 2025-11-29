@class ChatbotDeviceCPP2NativeCallerCallback, NSString;

@interface ChatBotVoIPDeviceAffImpl : NSObject <ChatbotDeviceCPP2NativeCallerBase>

@property (retain, nonatomic) ChatbotDeviceCPP2NativeCallerCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAITalkingStatusChangeAsync:(unsigned long long)a0 talkingMembers:(id)a1;
- (id)getDeviceInfo;
- (void).cxx_destruct;

@end
