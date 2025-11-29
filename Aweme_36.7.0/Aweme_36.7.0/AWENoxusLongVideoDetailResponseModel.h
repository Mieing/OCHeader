@class AWENoxusCompassVideoModel, AWENoxusLongAwemeModel;

@interface AWENoxusLongVideoDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWENoxusLongAwemeModel *longAweme;
@property (retain, nonatomic) AWENoxusCompassVideoModel *campass;

+ (id)videoJSONTransformer;
+ (id)longAwemeJSONTransformer;
+ (id)campassJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
