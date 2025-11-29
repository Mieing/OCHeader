@class NSString, NSNumber;

@interface BDXBridgeShowToastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *customIcon;
@property (nonatomic) long long type;
@property (nonatomic) long long icon;

+ (id)requiredKeyPaths;
+ (id)requiredKeyPaths;
+ (id)iconJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
