@class NSArray, NSString, AWECommentSurpriseEggSpecialEmojiModel, NSNumber;

@interface AWECommentSurpriseEggModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *imageUrlList;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *emojiKey;
@property (nonatomic) long long particleNum;
@property (copy, nonatomic) NSArray *particleSize;
@property (copy, nonatomic) NSArray *particleCenterX;
@property (retain, nonatomic) NSNumber *particleProDelay;
@property (copy, nonatomic) NSArray *particleFallX;
@property (copy, nonatomic) NSArray *particleFallY;
@property (copy, nonatomic) NSArray *particleFallCurveX;
@property (copy, nonatomic) NSArray *particleFallCurveY;
@property (copy, nonatomic) NSArray *particleFallSpeed;
@property (copy, nonatomic) NSArray *particleAlpha;
@property (retain, nonatomic) NSNumber *particleAlphaStartTime;
@property (retain, nonatomic) NSNumber *particleAlphaTotalTime;
@property (retain, nonatomic) NSNumber *randomRotationAngle;
@property (copy, nonatomic) NSString *showCount;
@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) NSString *lightBGColor;
@property (copy, nonatomic) NSString *darkBGColor;
@property (nonatomic) unsigned long long surpriseEggType;
@property (retain, nonatomic) AWECommentSurpriseEggSpecialEmojiModel *specialEmojiSurprise;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
