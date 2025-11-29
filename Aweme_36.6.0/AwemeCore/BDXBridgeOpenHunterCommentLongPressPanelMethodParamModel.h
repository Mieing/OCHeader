@class BDXBridgeOpenHunterCommentLongPressPanelTrackParams, NSString, NSDictionary, BDXBridgeOpenHunterCommentLongPressPanelCommentGroupData, NSArray, NSNumber;

@interface BDXBridgeOpenHunterCommentLongPressPanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSString *customItem;
@property (copy, nonatomic) NSDictionary *commentModel;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentLongPressPanelCommentGroupData *commentGroupData;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentLongPressPanelTrackParams *trackParams;
@property (retain, nonatomic) NSArray *configItem;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (nonatomic) long long generalCommentScene;

+ (id)requiredKeyPaths;
+ (id)commentGroupDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)trackParamsJSONTransformer;

- (void).cxx_destruct;

@end
