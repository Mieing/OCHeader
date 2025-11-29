@class NSArray;

@interface AWEIMAddCustomEmoticonResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSArray *succeedStickerCode;
@property (nonatomic) long long createStatusCode;

+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
