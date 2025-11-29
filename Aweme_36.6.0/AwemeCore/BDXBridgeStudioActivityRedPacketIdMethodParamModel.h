@class NSString, NSNumber;

@interface BDXBridgeStudioActivityRedPacketIdMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *outOrderId;
@property (copy, nonatomic) NSString *redPacketId;
@property (copy, nonatomic) NSString *couponId;
@property (retain, nonatomic) NSNumber *redPacketNum;
@property (copy, nonatomic) NSString *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
