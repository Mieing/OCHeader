@class NSData, NSString, AWEIMSendMessageCallBackTarget, AWEIMMessageContent, AWEIMMessage, NSDictionary, IESIMSendMessageSecurityCheckContext, NSObject;
@protocol IESIMConversationProtocol, OS_dispatch_queue, IESIMSendMsgFlowTrackProtocol;

@interface IESIMSendCombineShareInputContext : NSObject <IESIMSendAttachmentInputProtocol>

@property (copy, nonatomic) id /* block */ outputBuildBlock;
@property (retain, nonatomic) AWEIMMessage *combineShareMsg;
@property (readonly, nonatomic) int fileType;
@property (copy, nonatomic) NSString *tmpPath;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) long long messageType;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (retain, nonatomic) AWEIMMessageContent *messageContent;
@property (copy, nonatomic) NSDictionary *extraContentDict;
@property (nonatomic) long long quoteReplyServerMessageID;
@property (nonatomic) long long quoteReplyMessageType;
@property (copy, nonatomic) NSString *quoteReplyMessageHint;
@property (retain, nonatomic) IESIMSendMessageSecurityCheckContext *securityCheckContext;
@property (retain, nonatomic) AWEIMSendMessageCallBackTarget *sendCallBack;
@property (retain, nonatomic) id<IESIMSendMsgFlowTrackProtocol> trackContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flowQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flowCallBackQueue;
@property (nonatomic) double timeout;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildFlowOutputContext;
- (void)registerOutputContextBuildBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
