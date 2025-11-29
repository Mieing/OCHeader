@class AWEDemaciaVideoModel;

@interface AWEDemaciaLongVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEDemaciaVideoModel *video;
@property (nonatomic) long long type;
@property (nonatomic) double trailerStartTime;

+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
