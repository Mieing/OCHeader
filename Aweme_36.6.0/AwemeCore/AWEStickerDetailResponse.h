@class NSArray;

@interface AWEStickerDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *stickerArray;
@property (nonatomic) long long shootMode;

+ (id)stickerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
