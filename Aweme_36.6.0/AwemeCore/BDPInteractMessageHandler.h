@class NSString;
@protocol BDPInteractMessageHandleProtocol;

@interface BDPInteractMessageHandler : NSObject

@property (copy, nonatomic) NSString *event;
@property (weak, nonatomic) id<BDPInteractMessageHandleProtocol> delegate;

- (void).cxx_destruct;

@end
