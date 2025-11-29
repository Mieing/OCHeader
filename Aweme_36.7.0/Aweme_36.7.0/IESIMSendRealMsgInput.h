@class NSString, NSDictionary, IESIMSendMessageSecurityCheckContext, NSError;

@interface IESIMSendRealMsgInput : NSObject <IESIMSendAttachmentNodeInput>

@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *overrideMessageID;
@property (copy, nonatomic) NSDictionary *realMsgContentDict;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSDictionary *localExt;
@property (retain, nonatomic) NSError *prevError;
@property (nonatomic) long long quoteReplyServerMessageID;
@property (nonatomic) long long quoteReplyMessageType;
@property (copy, nonatomic) NSString *quoteReplyMessageHint;
@property (copy, nonatomic) NSDictionary *sendTrackContext;
@property (copy, nonatomic) NSDictionary *passThroughTrackParams;
@property (retain, nonatomic) IESIMSendMessageSecurityCheckContext *securityCheckContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
