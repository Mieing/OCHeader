@class NSArray, AWESearchXiguaVideoModel;

@interface AWESearchXiguaVideoWithPositionModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchXiguaVideoModel *videoInfoModel;
@property (retain, nonatomic) NSArray *positions;

+ (id)positionsJSONTransformer;
+ (id)videoInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
