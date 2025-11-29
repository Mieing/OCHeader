@class NSString, NSDictionary, NSData, NSNumber;

@interface QBRequestPacket : QBJceObject

@property (retain, nonatomic) NSNumber *iRequestId;
@property (retain, nonatomic) NSNumber *iVersion;
@property (retain, nonatomic) NSNumber *cPacketType;
@property (retain, nonatomic) NSNumber *iMessageType;
@property (retain, nonatomic) NSString *sServantName;
@property (retain, nonatomic) NSString *sFuncName;
@property (retain, nonatomic) NSData *sBuffer;
@property (retain, nonatomic) NSNumber *iTimeout;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSDictionary *status;

+ (id)generateRequestID;

- (id)init;
- (void)__pack:(id)a0;
- (void)__unpack:(id)a0;
- (void).cxx_destruct;

@end
