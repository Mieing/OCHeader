@class NSString;

@interface BDXBridgeImUpdatePetAICustomArchiveMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conShortId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *conId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
