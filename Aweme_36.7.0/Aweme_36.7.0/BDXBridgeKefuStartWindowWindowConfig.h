@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeKefuStartWindowWindowConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *dragDeleteText;
@property (retain, nonatomic) NSNumber *postionX;
@property (retain, nonatomic) NSNumber *postionY;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *stateConfig;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
