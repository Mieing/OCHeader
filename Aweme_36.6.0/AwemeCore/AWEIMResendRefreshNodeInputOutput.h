@class AWEIMMessage, NSString;
@protocol IESIMConversationProtocol;

@interface AWEIMResendRefreshNodeInputOutput : NSObject <IESIMSendAttachmentNodeInput, IESIMSendAttachmentNodeOutput>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
