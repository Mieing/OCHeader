@class NSArray;

@interface AWEStudioStickerDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *stickerArray;

+ (id)stickerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
