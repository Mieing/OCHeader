@class NSDictionary;

@interface AWEInteractionGrootStickerModel : AWEInteractionStickerModel

@property (copy, nonatomic) NSDictionary *grootInteraction;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)indexFromType;
- (void).cxx_destruct;

@end
