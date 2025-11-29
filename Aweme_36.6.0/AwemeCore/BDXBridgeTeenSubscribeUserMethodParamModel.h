@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeTeenSubscribeUserMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *minorSubscribeStatus;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSNumber *minorBlockStatus;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
