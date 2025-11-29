@class NSString;

@interface FlowIMFlowChatServiceConfig : NSObject {
    void /* function */ conversationId;
}

@property (nonatomic, readonly) BOOL enableTypewrite;
@property (nonatomic, readonly) NSString *conversationId;

- (id)initWithEnableTypewrite:(BOOL)a0 conversationId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
