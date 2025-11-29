@class NSString;

@interface BDXBridgeEcEccsInputCompatMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *message_id;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *dataUniqueId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
