@class NSString, NSNumber, NSDictionary;

@interface IESECListKitXBridgeEcPublishEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *isBroadcast;
@property (retain, nonatomic) NSNumber *isGlobal;
@property (retain, nonatomic) NSNumber *isSticky;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
