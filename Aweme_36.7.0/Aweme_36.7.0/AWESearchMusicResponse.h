@class AWESearchNilInfoModel, NSString, NSArray, AWESearchCorrectModel, AWESearchAdModel, AWESearchNilTextModel, AWESearchGlobalDoodleConfigModel, NSDictionary, AWERiskPreventModel, NSNumber;

@interface AWESearchMusicResponse : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (copy, nonatomic) NSArray *searchMusicList;
@property (copy, nonatomic) NSArray *searchMusicHeaderInfoList;
@property (retain, nonatomic) NSNumber *renderType;
@property (copy, nonatomic) NSString *musicFilterType;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *streamTimeCost;

+ (id)extraModelJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)musicListJSONTransformer;
+ (id)correctModelJSONTransformer;
+ (id)searchNilInfoModelJSONTransformer;
+ (id)searchMusicListJSONTransformer;
+ (id)searchMusicHeaderInfoListJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)adModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)getSelectedTab;
- (void).cxx_destruct;

@end
