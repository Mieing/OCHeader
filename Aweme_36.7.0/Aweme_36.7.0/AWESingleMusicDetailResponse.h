@class AWEMediaModel;

@interface AWESingleMusicDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEMediaModel *mediaInfo;

+ (id)mediaInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
