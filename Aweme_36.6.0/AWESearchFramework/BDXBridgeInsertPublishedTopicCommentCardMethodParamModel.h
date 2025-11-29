@class NSString, NSDictionary;

@interface BDXBridgeInsertPublishedTopicCommentCardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSDictionary *commentModel;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
