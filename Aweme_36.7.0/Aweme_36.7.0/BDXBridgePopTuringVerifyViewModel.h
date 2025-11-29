@class NSString, NSDictionary;

@interface BDXBridgePopTuringVerifyViewModel : BDXBridgeModel

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSDictionary *decision;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
