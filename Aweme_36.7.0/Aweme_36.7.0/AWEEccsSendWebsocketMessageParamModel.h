@class NSString, NSNumber, NSDictionary;

@interface AWEEccsSendWebsocketMessageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sequenceId;
@property (copy, nonatomic) NSString *logId;
@property (retain, nonatomic) NSNumber *method;
@property (retain, nonatomic) NSNumber *service;
@property (copy, nonatomic) NSDictionary *payload;
@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadEncoding;
@property (copy, nonatomic) NSDictionary *headers;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
