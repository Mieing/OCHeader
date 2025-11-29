@class HTSLiveLinkmicAudienceEmoji, NSString;

@interface IESLivePKGuestEmojiModel : NSObject <NSCoding>

@property (retain, nonatomic) HTSLiveLinkmicAudienceEmoji *originEmoji;
@property (copy, nonatomic) NSString *emojiID;

+ (id)emojiWithPB:(id)a0;
+ (id)pbWithEmoji:(id)a0;

- (BOOL)isRandom;
- (id)emojiName;
- (id)initWithPBEmoji:(id)a0;
- (id)emojiIDNumber;
- (id)emojiShowTimems;
- (id)emojiResultTimems;
- (id)permission;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)category;
- (BOOL)isEqual:(id)a0;
- (id)dynamicImage;
- (id)staticImage;

@end
