@class NSString;

@interface FlowIMX.FlowIMInterruptRequest : NSObject <NSObject> {
    void /* function */ conversationId;
    void /* function */ senderMessageId;
    void /* function */ senderLocalMessageId;
    void /* function */ receivingMessageId;
    void /* function */ receivingMessageReplyMsgId;
    void /* function */ chatId;
}

@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *senderMessageId;
@property (nonatomic, copy) NSString *senderLocalMessageId;
@property (nonatomic, copy) NSString *receivingMessageId;
@property (nonatomic, copy) NSString *receivingMessageReplyMsgId;
@property (nonatomic) BOOL shouldRequest;
@property (nonatomic, copy) NSString *chatId;

- (void).cxx_destruct;
- (id)init;

@end
