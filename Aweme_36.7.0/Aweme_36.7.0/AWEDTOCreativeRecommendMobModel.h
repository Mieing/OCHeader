@class NSString, AWEDTOCreativeRecommendEffectMobModel;

@interface AWEDTOCreativeRecommendMobModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lastPlayGid;
@property (copy, nonatomic) NSString *lastpagePlayGid;
@property (copy, nonatomic) NSString *prepagePlayGid;
@property (copy, nonatomic) NSString *lastpageName;
@property (copy, nonatomic) NSString *prepageName;
@property (copy, nonatomic) NSString *rootGid;
@property (copy, nonatomic) NSString *lastpagePlayAuthorId;
@property (copy, nonatomic) NSString *lastpagePlayHashtagNames;
@property (copy, nonatomic) NSString *lastpagePlayMusicId;
@property (copy, nonatomic) NSString *lastpagePlayPropIds;
@property (retain, nonatomic) AWEDTOCreativeRecommendEffectMobModel *effectRecommendModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectRecommendModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
