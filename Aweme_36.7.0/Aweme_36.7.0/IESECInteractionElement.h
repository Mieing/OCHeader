@class IESECElementLoopText, NSString, IESECElementText, IESECInteractionAvatar, IESECElementBlank, IESECElementAvatar, IESECElementImage;

@interface IESECInteractionElement : GPBMessage

@property (nonatomic) int elementType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) IESECInteractionAvatar *avatars;
@property (nonatomic) BOOL hasAvatars;
@property (nonatomic) int blankWidth;
@property (nonatomic) int textSize;
@property (retain, nonatomic) IESECElementText *textV2;
@property (nonatomic) BOOL hasTextV2;
@property (retain, nonatomic) IESECElementBlank *blankV2;
@property (nonatomic) BOOL hasBlankV2;
@property (retain, nonatomic) IESECElementAvatar *avatarsV2;
@property (nonatomic) BOOL hasAvatarsV2;
@property (retain, nonatomic) IESECElementImage *imageV2;
@property (nonatomic) BOOL hasImageV2;
@property (retain, nonatomic) IESECElementLoopText *loopText;
@property (nonatomic) BOOL hasLoopText;

+ (id)descriptor;

@end
