@class NSString;

@interface BDXBridgeOpenHunterCommentListPanelTrackParams : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *previousPage;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
