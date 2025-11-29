@class BDLynxBridgeReceivedMessage;

@interface SECLynxBridgeInvokerContext : NSObject

@property (retain, nonatomic) BDLynxBridgeReceivedMessage *message;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
