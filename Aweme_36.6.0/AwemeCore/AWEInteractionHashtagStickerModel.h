@class NSDictionary;

@interface AWEInteractionHashtagStickerModel : AWEInteractionStickerModel

@property (copy, nonatomic) NSDictionary *hashtagInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)hashtagId;
- (BOOL)isFollowEntry;
- (void).cxx_destruct;
- (id)hashtagName;

@end
