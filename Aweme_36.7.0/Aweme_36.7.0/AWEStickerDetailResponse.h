@class NSArray;

@interface AWEStickerDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *stickerArray;

+ (id)stickerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
