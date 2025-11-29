@class AWESearchNilTextModel, NSArray, NewIESLiveFeedExtraModel, NSNumber, AWESearchNilInfoModel;

@interface AWESearchLiveRecommdResponceModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *data;
@property (copy, nonatomic) NewIESLiveFeedExtraModel *extra;
@property (retain, nonatomic) NSNumber *statuscode;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;

+ (id)extraJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
