@class NSNumber, NSString, NSArray;

@interface BDXBridgeLifeCreationEditMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSArray *respInstances;

+ (id)respInstancesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
