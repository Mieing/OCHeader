@class NSNumber, NSString;

@interface BDXBridgeOpenThirdMapDialogMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *address;
@property (retain, nonatomic) NSNumber *latitude_gcj;
@property (retain, nonatomic) NSNumber *longitude_gcj;
@property (nonatomic) long long travel_method;

+ (id)requiredKeyPaths;
+ (id)travel_methodJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
