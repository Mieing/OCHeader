@class NSString, NSNumber;

@interface BDXBridgePredictSearchMissMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *predict_id;
@property (copy, nonatomic) NSString *targetContainerID;
@property (retain, nonatomic) NSNumber *is_new_predict_search;
@property (retain, nonatomic) NSNumber *request_mode;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
