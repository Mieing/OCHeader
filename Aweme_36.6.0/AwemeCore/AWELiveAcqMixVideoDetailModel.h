@class AWEMixVideoModel;

@interface AWELiveAcqMixVideoDetailModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;

+ (id)mixInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
