@class NSString, NSDictionary;

@interface JSWorkerBridgeReceivedMessage : NSObject

@property (copy, nonatomic) NSString *containerID;
@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSDictionary *rawData;
@property (readonly, copy, nonatomic) NSString *protocolVersion;
@property (readonly, copy, nonatomic) NSString *namescope;
@property (readonly, copy, nonatomic) NSDictionary *data;

- (id)initWithMethodName:(id)a0 rawData:(id)a1 containerID:(id)a2;
- (void).cxx_destruct;
- (void)decode;

@end
