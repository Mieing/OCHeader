@class NSString, NSNumber;

@interface BDXBridgeImSwitchKefuCallWindowMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *room_id;
@property (retain, nonatomic) NSNumber *is_full;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
