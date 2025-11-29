@class NSArray;

@interface AWEIMDeleteCustomEmoticonResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *stickers;

+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
