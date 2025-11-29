@class NSString, _TtC7FlowIMX17FlowIMCursorModel;

@interface FlowIMX.FlowIMGetMessageListRequest : NSObject <NSObject> {
    void /* function */ conversationId;
}

@property (nonatomic, readonly) NSString *conversationId;
@property (nonatomic, readonly) _TtC7FlowIMX17FlowIMCursorModel *cursor;
@property (nonatomic, readonly) BOOL waitingForCloudIfNeed;

- (id)initWithConversationId:(id)a0 cursor:(id)a1 waitingForCloudIfNeed:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
