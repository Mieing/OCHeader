@class BDXBridgeDspMusicChartRequestMusic, NSString, NSArray, NSNumber;

@interface BDXBridgeDspMusicChartRequestMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) BDXBridgeDspMusicChartRequestMusic *music;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
