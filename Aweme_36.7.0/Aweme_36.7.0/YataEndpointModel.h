@class NSString, NSDictionary;

@interface YataEndpointModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *protocolID;
@property (retain, nonatomic) NSDictionary *bizInfo;
@property (nonatomic) double frontierMessageTimeout;
@property (copy, nonatomic) NSString *expectProtocolID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolVersionJSONTransformer;
+ (id)protocolIDJSONTransformer;
+ (id)bizInfoJSONTransformer;
+ (id)frontierMessageTimeoutJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
