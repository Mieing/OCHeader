@class NSString;

@interface FlowIMX.ConvertLocalConversationToRemoteRequest : NSObject <NSObject> {
    void /* function */ localConversationID;
    void /* function */ remoteConversationID;
}

@property (nonatomic, copy) NSString *localConversationID;
@property (nonatomic, copy) NSString *remoteConversationID;

- (void).cxx_destruct;
- (id)init;

@end
