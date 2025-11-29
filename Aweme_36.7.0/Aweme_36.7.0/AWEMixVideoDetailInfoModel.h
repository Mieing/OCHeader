@class AWEMixVideoModel;

@interface AWEMixVideoDetailInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;

+ (id)mixInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
