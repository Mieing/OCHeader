@class AWEGoodsServiceSubscribeInfo;

@interface AWEGoodsServiceSubscribeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEGoodsServiceSubscribeInfo *subscribeInfo;

+ (id)subscribeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
