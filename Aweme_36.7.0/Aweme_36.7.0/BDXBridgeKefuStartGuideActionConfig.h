@class NSNumber;

@interface BDXBridgeKefuStartGuideActionConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *rotation;
@property (retain, nonatomic) NSNumber *hit;
@property (retain, nonatomic) NSNumber *push;
@property (retain, nonatomic) NSNumber *present;
@property (retain, nonatomic) NSNumber *appBackground;
@property (retain, nonatomic) NSNumber *appForeground;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
