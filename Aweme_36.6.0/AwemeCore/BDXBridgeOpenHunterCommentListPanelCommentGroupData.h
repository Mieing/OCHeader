@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenHunterCommentListPanelCommentGroupData : BDXBridgeModel

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *commentCountTotal;
@property (copy, nonatomic) NSDictionary *author;
@property (copy, nonatomic) NSDictionary *awemeInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
