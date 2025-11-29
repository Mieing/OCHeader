@class HTSLiveEmojiInteractResource, NSString, IESLiveEmojiInteractResource, IESLiveInteractEmojiFromEffect, HTSLiveLinkmicAudienceEmoji;

@interface IESLiveInteractionEmojiModel : NSObject <NSCoding>

@property (retain, nonatomic) HTSLiveLinkmicAudienceEmoji *originEmoji;
@property (copy, nonatomic) NSString *emojiID;
@property (retain, nonatomic) HTSLiveEmojiInteractResource *interactResource;
@property (retain, nonatomic) IESLiveEmojiInteractResource *localInteractResource;
@property (retain, nonatomic) NSString *localResourceBaseDir;
@property (retain, nonatomic) IESLiveInteractEmojiFromEffect *fromEffect;
@property (copy, nonatomic) NSString *emojiSound;

+ (id)emojiWithPB:(id)a0;
+ (id)pbWithEmoji:(id)a0;

- (BOOL)isRandom;
- (id)emojiName;
- (id)initWithPBEmoji:(id)a0;
- (id)emojiIDNumber;
- (id)emojiShowTimems;
- (id)emojiResultTimems;
- (BOOL)isRandomEmoji;
- (BOOL)isRandomTime;
- (BOOL)isRandomNum;
- (id)randomTitle;
- (id)permission;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (void)encodeWithCoder:(id)a0;
- (BOOL)disable;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)category;
- (BOOL)isEqual:(id)a0;
- (id)dynamicImage;
- (id)staticImage;

@end
