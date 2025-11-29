@class NSString, NSDictionary;

@interface FlowIMX.FlowIMRegenerateMsgRequest : NSObject <NSObject> {
    void /* function */ conversationId;
    void /* function */ botReplyMessageId;
    void /* function */ appletPayload;
    void /* function */ ext;
}

@property (nonatomic) long long conversationType;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *botReplyMessageId;
@property (nonatomic) BOOL textToImage;
@property (nonatomic, copy) NSDictionary *appletPayload;
@property (nonatomic, copy) NSDictionary *ext;

- (void).cxx_destruct;
- (id)init;

@end
