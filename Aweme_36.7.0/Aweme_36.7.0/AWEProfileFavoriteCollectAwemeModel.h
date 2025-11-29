@class AWEProfileFavoriteCollectsListResponseModel;

@interface AWEProfileFavoriteCollectAwemeModel : AWEBaseApiModel

@property (retain, nonatomic) AWEProfileFavoriteCollectsListResponseModel *collectsInfo;

+ (id)collectsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
