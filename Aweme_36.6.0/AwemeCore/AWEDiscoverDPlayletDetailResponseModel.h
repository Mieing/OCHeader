@class NSString, AWEPlayletInfoModel, NSArray;

@interface AWEDiscoverDPlayletDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPlayletInfoModel *playletModel;
@property (retain, nonatomic) NSString *lynxPanelConfigJSON;
@property (copy, nonatomic) NSArray *relatedItemTagInfos;

+ (id)propertyToModelClassInArrayMap;
+ (id)playletModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
