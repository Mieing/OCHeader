@class NSDictionary;

@interface AWEInteractionPOIStickerModel : AWEInteractionStickerModel

@property (retain, nonatomic) NSDictionary *poiInfo;
@property (retain, nonatomic) NSDictionary *poiStyleInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)indexFromType;
- (void).cxx_destruct;

@end
