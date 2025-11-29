@protocol IESIMConversationProtocol;

@interface AWEIMMessageWeakProxy : NSObject

@property (weak, nonatomic) id<IESIMConversationProtocol> con;

- (void).cxx_destruct;

@end
