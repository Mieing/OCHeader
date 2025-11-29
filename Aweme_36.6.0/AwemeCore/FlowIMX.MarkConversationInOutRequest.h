@class NSString;

@interface FlowIMX.MarkConversationInOutRequest : NSObject <NSObject> {
    void /* function */ conversationID;
}

@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) long long scene;

- (id)initWithConversationID:(id)a0 scene:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
