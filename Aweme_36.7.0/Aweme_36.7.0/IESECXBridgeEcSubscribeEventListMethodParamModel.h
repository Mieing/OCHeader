@class NSNumber, NSArray;

@interface IESECXBridgeEcSubscribeEventListMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *clearExistEvent;
@property (retain, nonatomic) NSArray *eventList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
