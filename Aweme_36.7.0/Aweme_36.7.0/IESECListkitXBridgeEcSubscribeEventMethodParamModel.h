@class NSString, NSNumber;

@interface IESECListkitXBridgeEcSubscribeEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *clearExistEvent;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
