@class NSString;

@interface FlowIMX.FlowIMUpdateContentRequest : NSObject <NSObject> {
    void /* function */ conversationId;
    void /* function */ localMessageId;
    void /* function */ messageId;
    void /* function */ content;
}

@property (nonatomic) long long conversationType;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *localMessageId;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSString *content;

- (void).cxx_destruct;
- (id)init;

@end
