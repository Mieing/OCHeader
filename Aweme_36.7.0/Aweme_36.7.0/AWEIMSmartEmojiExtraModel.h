@class NSString;

@interface AWEIMSmartEmojiExtraModel : AWEBaseApiModel

@property (nonatomic) long long useDefaultEmojis;
@property (copy, nonatomic) NSString *logID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
