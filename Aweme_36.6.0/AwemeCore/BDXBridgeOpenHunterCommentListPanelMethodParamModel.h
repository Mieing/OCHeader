@class NSArray, BDXBridgeOpenHunterCommentListPanelCommentGroupData, BDXBridgeOpenHunterCommentListPanelConfigItem, BDXBridgeOpenHunterCommentListPanelTrackParams, NSNumber, NSDictionary;

@interface BDXBridgeOpenHunterCommentListPanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelCommentGroupData *commentGroupData;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelTrackParams *trackParams;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelConfigItem *configItem;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (retain, nonatomic) NSArray *insertCommentIDs;
@property (nonatomic) long long generalCommentScene;

+ (id)requiredKeyPaths;
+ (id)commentGroupDataJSONTransformer;
+ (id)configItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)trackParamsJSONTransformer;

- (void).cxx_destruct;

@end
