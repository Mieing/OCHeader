@class NSArray, IESECHeadVideoModel, NSDictionary;

@interface IESECGoodsDetailHeadMoreVideoModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *videoList;
@property (retain, nonatomic) IESECHeadVideoModel *anchorVideo;
@property (nonatomic) long long anchorIndex;
@property (copy, nonatomic) NSDictionary *track;

+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
