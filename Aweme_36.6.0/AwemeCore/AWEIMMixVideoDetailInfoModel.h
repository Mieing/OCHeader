@class AWEMixVideoModel;

@interface AWEIMMixVideoDetailInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;

+ (id)mixInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
