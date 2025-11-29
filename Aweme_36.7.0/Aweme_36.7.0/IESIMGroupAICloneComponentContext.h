@class NSDictionary;
@protocol IESIMConversationProtocol;

@interface IESIMGroupAICloneComponentContext : AWEIMComponentContext

@property (readonly, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ didAddBlock;
@property (copy, nonatomic) id /* block */ didPopBlock;

- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
