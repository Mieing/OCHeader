@class NSString, NSDictionary;

@interface BDXBridgeOpenCommentPanelMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL forceOpenReply;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *aweme;
@property (copy, nonatomic) NSDictionary *comment;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
