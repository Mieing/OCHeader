@class NSString, NSDictionary;

@interface BDXBridgeOpenHunterCommentLongPressPanelTrackParams : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
