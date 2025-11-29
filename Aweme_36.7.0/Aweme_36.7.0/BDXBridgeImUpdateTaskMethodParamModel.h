@class NSString;

@interface BDXBridgeImUpdateTaskMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *updateType;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *cShortId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
