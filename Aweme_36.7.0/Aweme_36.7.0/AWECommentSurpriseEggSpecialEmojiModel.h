@class NSString, NSArray, NSNumber;

@interface AWECommentSurpriseEggSpecialEmojiModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *surpriseUrl;
@property (copy, nonatomic) NSString *surpriseSchema;
@property (nonatomic) long long surpriseSize;
@property (retain, nonatomic) NSArray *productionXRange;
@property (retain, nonatomic) NSArray *fallSpeedRange;
@property (retain, nonatomic) NSArray *fallXCurve;
@property (retain, nonatomic) NSArray *fallYCurve;
@property (retain, nonatomic) NSArray *fallTargetMargin;
@property (nonatomic) long long stayBreathePeriodDuration;
@property (nonatomic) long long stayBreathePeriodTimes;
@property (retain, nonatomic) NSNumber *stayBreatheSize;
@property (retain, nonatomic) NSArray *stayBreatheCurve;
@property (nonatomic) long long fadeOutScaleDuration;
@property (retain, nonatomic) NSArray *fadeOutScaleCurve;
@property (nonatomic) long long fadeOutAlphaDuration;
@property (retain, nonatomic) NSArray *fadeOutAlphaCurve;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
