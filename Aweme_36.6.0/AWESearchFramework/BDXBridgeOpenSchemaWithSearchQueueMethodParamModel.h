@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenSchemaWithSearchQueueMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *pop_id;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
