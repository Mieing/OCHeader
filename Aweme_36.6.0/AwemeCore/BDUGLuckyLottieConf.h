@class NSString;

@interface BDUGLuckyLottieConf : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *lottieUrl;
@property (nonatomic) double playDurationMs;
@property (nonatomic) BOOL repeat;
@property (nonatomic) BOOL clickDisappear;

+ (id)modelCustomPropertyMapper;

- (id)hashString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
