@class NSString;

@interface BDXBridgePoiLynxTrackParamsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *bundle;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
