@class NSString;

@interface BDXBridgeOpenConversationPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *chatType;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *ext;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
