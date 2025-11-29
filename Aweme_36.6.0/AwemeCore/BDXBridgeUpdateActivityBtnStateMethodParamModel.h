@class NSString, NSNumber;

@interface BDXBridgeUpdateActivityBtnStateMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSString *nowTimestamp;
@property (copy, nonatomic) NSString *btnText;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
