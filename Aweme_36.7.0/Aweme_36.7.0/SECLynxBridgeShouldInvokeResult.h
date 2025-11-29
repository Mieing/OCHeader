@class BDLynxBridgeSendMessage;

@interface SECLynxBridgeShouldInvokeResult : NSObject

@property (retain, nonatomic) BDLynxBridgeSendMessage *message;
@property (nonatomic) BOOL shouldInvoke;

+ (id)returnOK;
+ (id)returnNOByMessage:(id)a0;

- (void).cxx_destruct;

@end
