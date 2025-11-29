@class NSString, NSDictionary;

@interface BDXBridgeOpenHunterCommentInputPanelCommentGroupData : BDXBridgeModel

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *author;
@property (copy, nonatomic) NSDictionary *awemeInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
