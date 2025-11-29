@class BDXBridgeOpenHunterCommentInputPanelCommentGroupData, BDXBridgeOpenHunterCommentInputPanelInputConfig, NSDictionary, BDXBridgeOpenHunterCommentInputPanelTrackParams, NSNumber;

@interface BDXBridgeOpenHunterCommentInputPanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *bizPublish;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentInputPanelCommentGroupData *commentGroupData;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentInputPanelTrackParams *trackParams;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (copy, nonatomic) NSDictionary *defaultCommentModel;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentInputPanelInputConfig *inputConfig;
@property (copy, nonatomic) NSDictionary *replyComment;
@property (nonatomic) long long generalCommentScene;

+ (id)requiredKeyPaths;
+ (id)commentGroupDataJSONTransformer;
+ (id)inputConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)trackParamsJSONTransformer;

- (void).cxx_destruct;

@end
