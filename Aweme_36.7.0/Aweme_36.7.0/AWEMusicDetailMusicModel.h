@class AWETaskLiteModel, NSArray, AWEMusicLeaderboardInfoModel, AWEMusicDetailPromotionModel, NSString, AWEDetailBannerModel, AWEMusicModel, AWEMusicDetailFeatureModel, AWEUnifiedMusicGroupModel, AWECodeGenClipMaterialInfoModel;

@interface AWEMusicDetailMusicModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicModel *musicInfo;
@property (copy, nonatomic) NSArray *relatedList;
@property (retain, nonatomic) AWEMusicLeaderboardInfoModel *leaderboardInfo;
@property (retain, nonatomic) AWETaskLiteModel *taskLiteModel;
@property (copy, nonatomic) NSArray *bannerArray;
@property (retain, nonatomic) AWEDetailBannerModel *vsBannerModel;
@property (retain, nonatomic) AWEMusicDetailFeatureModel *featureModel;
@property (retain, nonatomic) AWEMusicDetailPromotionModel *promotionModel;
@property (retain, nonatomic) AWEUnifiedMusicGroupModel *unifiedMusic;
@property (retain, nonatomic) AWECodeGenClipMaterialInfoModel *clipMaterialInfo;
@property (copy, nonatomic) NSString *useSameAction;
@property (nonatomic) BOOL musicAvailable;
@property (copy, nonatomic) NSString *oneKeyAction;
@property (copy, nonatomic) NSString *recallSource;
@property (copy, nonatomic) NSArray *followShootButtons;
@property (nonatomic) BOOL useCellMusicCaption;

+ (id)propertyToModelClassInArrayMap;
+ (id)unifiedMusicJSONTransformer;
+ (id)relatedListJSONTransformer;
+ (id)mvTemplateInfoJSONTransformer;
+ (id)promotionModelJSONTransformer;
+ (id)bannerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
