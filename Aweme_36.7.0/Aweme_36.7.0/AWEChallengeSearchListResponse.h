@class AWESearchNilTextModel, NSString, NSArray, AWESearchCorrectModel, AWESearchAdModel, AWESearchNilInfoModel, AWESearchGlobalDoodleConfigModel, NSDictionary, AWERiskPreventModel;

@interface AWEChallengeSearchListResponse : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (retain, nonatomic) NSArray *challengs;
@property (nonatomic) BOOL isMatch;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hitBlackList;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *streamTimeCost;

+ (id)extraModelJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)correctModelTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)challengsJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)adModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
