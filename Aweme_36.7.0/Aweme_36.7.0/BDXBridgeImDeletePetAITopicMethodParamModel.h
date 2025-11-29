@class NSString, NSDictionary;

@interface BDXBridgeImDeletePetAITopicMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conShortId;
@property (nonatomic) BOOL isDeleteAllTopic;
@property (copy, nonatomic) NSString *topicId;
@property (copy, nonatomic) NSString *topicTitle;
@property (copy, nonatomic) NSString *conId;
@property (copy, nonatomic) NSDictionary *topic;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
