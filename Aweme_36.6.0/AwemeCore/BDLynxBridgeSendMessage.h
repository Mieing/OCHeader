@class NSString, BDLynxBridgeReceivedMessage;

@interface BDLynxBridgeSendMessage : NSObject

@property (nonatomic) long long bdwm_callbackTS;
@property (nonatomic) long long bdwm_fireEventTS;
@property (nonatomic) long long bdwm_endTS;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) id data;
@property (nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) BDLynxBridgeReceivedMessage *invokeMessage;

+ (id)messageWithContainerID:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)encodedMessage;

@end
