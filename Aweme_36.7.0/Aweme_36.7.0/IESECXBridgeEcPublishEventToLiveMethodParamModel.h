@class NSString, NSNumber, NSDictionary;

@interface IESECXBridgeEcPublishEventToLiveMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *isBroadcast;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
