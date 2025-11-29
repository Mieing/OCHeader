@class NSString;

@interface BDXBridgeImSwitchKefuCallMicMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *room_id;
@property (nonatomic) BOOL enable;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
