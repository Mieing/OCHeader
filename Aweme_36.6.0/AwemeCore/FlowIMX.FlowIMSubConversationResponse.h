@class NSArray, FlowIMCocoError;
@protocol _TtP7FlowIMX18FlowIMConversation_;

@interface FlowIMX.FlowIMSubConversationResponse : NSObject <NSObject> {
    void /* function */ originMessages;
    void /* function */ messages;
}

@property (nonatomic, copy) NSArray *originMessages;
@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, retain) id<_TtP7FlowIMX18FlowIMConversation_> conversation;
@property (nonatomic, retain) FlowIMCocoError *error;

- (id)initWithMessages:(id)a0 conversation:(id)a1 originMessages:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
