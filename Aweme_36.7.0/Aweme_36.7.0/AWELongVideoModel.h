@class AWELongVideoControlModel, AWEVideoModel;

@interface AWELongVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEVideoModel *video;
@property (nonatomic) long long type;
@property (nonatomic) double trailerStartTime;
@property (retain, nonatomic) AWELongVideoControlModel *videoControl;

+ (id)videoJSONTransformer;
+ (id)videoControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
