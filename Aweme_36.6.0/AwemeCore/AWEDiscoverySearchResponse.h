@class AWESearchNilInfoModel, NSString, NSArray, AWESearchCorrectModel, AWESearchAdModel, AWESearchNilTextModel, AWEDiscoverySearchExtraModel, NSDictionary, AWERiskPreventModel, NSNumber;

@interface AWEDiscoverySearchResponse : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSNumber *cursor;
@property (nonatomic) long long hasMore;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (retain, nonatomic) AWEDiscoverySearchExtraModel *extraModel;
@property (copy, nonatomic) NSDictionary *streamTimeCost;

+ (id)extraModelJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)correctModelTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)userListJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)adModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
