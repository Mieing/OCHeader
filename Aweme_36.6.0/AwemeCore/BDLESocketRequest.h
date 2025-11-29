@class NSString, GCDAsyncSocket, BDByteCastPPBaseCmd;

@interface BDLESocketRequest : NSObject

@property (weak, nonatomic) GCDAsyncSocket *socket;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) int port;
@property (retain, nonatomic) BDByteCastPPBaseCmd *message;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double sendTs;
@property (nonatomic) double ackTs;

- (BOOL)isAckRequest;
- (void).cxx_destruct;
- (id)messageId;
- (long long)requestPriority;

@end
