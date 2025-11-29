@class NSString;

@interface BDUGLuckyRainConf : BDUGLuckyBDModel

@property (nonatomic) long long rainId;
@property (nonatomic) BOOL needTimeCorrection;
@property (copy, nonatomic) NSString *preheatLottieUrl;
@property (nonatomic) double preheatDuration;
@property (copy, nonatomic) NSString *preheatTipContent;
@property (nonatomic) double startCountdownSecond;
@property (copy, nonatomic) NSString *startCountdownTip;
@property (nonatomic) double endCountdownMin;
@property (copy, nonatomic) NSString *endCountdownMinTip;
@property (nonatomic) double endCountdownSecond;
@property (copy, nonatomic) NSString *endCountdownSecondTip;
@property (nonatomic) double rainStartTimeMs;
@property (nonatomic) double rainEndTimeMs;

+ (id)modelCustomPropertyMapper;

- (id)rainIDStr;
- (id)hashString;
- (void).cxx_destruct;

@end
