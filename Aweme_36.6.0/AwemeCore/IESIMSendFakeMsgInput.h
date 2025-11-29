@class NSString, NSDictionary, IESIMSendMessageSecurityCheckContext, AWEIMSendMessageCallBackTarget;

@interface IESIMSendFakeMsgInput : NSObject <IESIMSendAttachmentNodeInput>

@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *fakeMsgContentDict;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (nonatomic) long long quoteReplyServerMessageID;
@property (nonatomic) long long quoteReplyMessageType;
@property (copy, nonatomic) NSString *quoteReplyMessageHint;
@property (retain, nonatomic) IESIMSendMessageSecurityCheckContext *securityCheckContext;
@property (retain, nonatomic) AWEIMSendMessageCallBackTarget *sendCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
