@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenHunterCommentReplyListPanelCommentGroupData : BDXBridgeModel

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *commentCountTotal;
@property (copy, nonatomic) NSDictionary *awemeInfo;
@property (copy, nonatomic) NSDictionary *author;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
