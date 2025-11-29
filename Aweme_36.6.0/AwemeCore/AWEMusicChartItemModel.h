@class NSNumber, AWEAwemeModel;

@interface AWEMusicChartItemModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *itemInfo;
@property (retain, nonatomic) NSNumber *heat;

+ (id)itemInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
