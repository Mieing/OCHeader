@class NSData;

@interface TouchInfo : WXPBGeneratedMessage

@property (nonatomic) int canUseTouch;
@property (retain, nonatomic) NSData *touchChallenge;
@property (nonatomic) int needChangeAuthKey;
@property (nonatomic) int soterPayOpenType;
@property (nonatomic) int biometricsVersion;

+ (void)initialize;

@end
