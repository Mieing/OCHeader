@class NSDictionary;

@interface AWEInteractionMentionStickerModel : AWEInteractionStickerModel

@property (copy, nonatomic) NSDictionary *mentionedUserInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)indexFromType;
- (void).cxx_destruct;

@end
