@class BDXBridgeOpenHunterCommentReplyListPanelConfigItem, BDXBridgeOpenHunterCommentReplyListPanelBusinessParams, NSDictionary, NSArray, BDXBridgeOpenHunterCommentReplyListPanelCommentGroupData, NSNumber, BDXBridgeOpenHunterCommentReplyListPanelTrackParams;

@interface BDXBridgeOpenHunterCommentReplyListPanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSDictionary *commentModel;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelCommentGroupData *commentGroupData;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelTrackParams *trackParams;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelConfigItem *configItem;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelBusinessParams *businessParams;
@property (retain, nonatomic) NSArray *insertCommentIDs;
@property (nonatomic) long long generalCommentScene;

+ (id)requiredKeyPaths;
+ (id)commentGroupDataJSONTransformer;
+ (id)configItemJSONTransformer;
+ (id)businessParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)trackParamsJSONTransformer;

- (void).cxx_destruct;

@end
