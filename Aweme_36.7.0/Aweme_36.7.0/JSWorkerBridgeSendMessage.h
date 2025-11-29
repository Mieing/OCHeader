@class NSString, JSWorkerBridgeReceivedMessage;

@interface JSWorkerBridgeSendMessage : NSObject

@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) id data;
@property (nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) JSWorkerBridgeReceivedMessage *invokeMessage;

+ (id)messageWithContainerID:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)encodedMessage;

@end
