@class NSString, NSDictionary;

@interface BDXBridgeOpenHunterCommentReplyListPanelTrackParams : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *customTrackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
