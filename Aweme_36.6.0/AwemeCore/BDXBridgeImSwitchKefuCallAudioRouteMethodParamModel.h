@class NSString, NSNumber;

@interface BDXBridgeImSwitchKefuCallAudioRouteMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *room_id;
@property (retain, nonatomic) NSNumber *route;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
