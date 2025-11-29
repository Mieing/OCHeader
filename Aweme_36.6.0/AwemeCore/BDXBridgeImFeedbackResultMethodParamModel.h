@class NSString, NSNumber;

@interface BDXBridgeImFeedbackResultMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *message_id;
@property (retain, nonatomic) NSNumber *result;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
