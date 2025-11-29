@class AWEShareModel, NSString, NSArray, NSDictionary, AWEHotTrendsLabelModel, AWECollectTrendsModel, AWEURLModel;

@interface AWETrendInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *trendID;
@property (copy, nonatomic) NSString *trendTitle;
@property (copy, nonatomic) NSString *trendDescription;
@property (nonatomic) long long userCount;
@property (nonatomic) long long displayLocation;
@property (retain, nonatomic) NSArray *trendMaterials;
@property (copy, nonatomic) NSString *followShootButtonText;
@property (copy, nonatomic) NSString *followShootSchema;
@property (nonatomic) long long trendTestType;
@property (retain, nonatomic) NSArray *insertMusicIds;
@property (nonatomic) long long collectStatus;
@property (retain, nonatomic) NSArray *musicModelList;
@property (retain, nonatomic) NSArray *unifiedMusicList;
@property (retain, nonatomic) AWEURLModel *topIcon;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (copy, nonatomic) NSString *UGID;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *flashMobId;
@property (copy, nonatomic) NSString *flashMobTitle;
@property (copy, nonatomic) NSString *trendsLabel;
@property (nonatomic) BOOL musicBanClick;
@property (nonatomic) BOOL materialBanClick;
@property (copy, nonatomic) NSArray *originMaterialModels;
@property (retain, nonatomic) AWEHotTrendsLabelModel *hotLabel;
@property (copy, nonatomic) NSDictionary *trackPassThrough;
@property (copy, nonatomic) NSString *majorUGID;
@property (copy, nonatomic) NSString *minorUGID;
@property (retain, nonatomic) AWECollectTrendsModel *collectTrends;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) BOOL showMusicCaption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInfoJSONTransformer;
+ (id)collectTrendsJSONTransformer;
+ (id)trackPassThroughJSONTransformer;
+ (id)majorUGIDJSONTransformer;
+ (id)minorUGIDJSONTransformer;
+ (id)hotLabelJSONTransformer;
+ (id)trendMaterialsJSONTransformer;
+ (id)originMaterialModelsJSONTransformer;
+ (id)musicModelListJSONTransformer;
+ (id)unifiedMusicListJSONTransformer;
+ (id)shareCoverURLJSONTransformer;
+ (id)insertMusicIdsJSONTransformer;
+ (id)trendIDJSONTransformer;
+ (id)musicIdJSONTransformer;
+ (id)UGIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
