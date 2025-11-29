@class NSString, NSNumber;

@interface BDXBridgeSubscribeEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *timestamp;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
