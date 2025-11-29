@class NSString, HTSLiveImage;

@interface HTSLiveEmojiMaterial : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *emoji;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long emojiId;
@property (retain, nonatomic) HTSLiveImage *effectIcon;
@property (nonatomic) BOOL hasEffectIcon;

+ (id)descriptor;

@end
