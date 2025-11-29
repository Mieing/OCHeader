@class NSNumber, AWEAwemeModel;

@interface ACCMusicChartItemModel : ACCBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *itemInfo;
@property (retain, nonatomic) NSNumber *heat;

+ (id)itemInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
