@class NSArray;

@interface AWEInteractionSocialTextStickerModel : AWEInteractionStickerModel

@property (copy, nonatomic) NSArray *textSocialInfos;

+ (id)textSocialInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)indexFromType;
- (void).cxx_destruct;

@end
