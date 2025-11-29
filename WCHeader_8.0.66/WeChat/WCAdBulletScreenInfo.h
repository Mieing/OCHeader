@class NSArray, WCAdBulletScreenTextStyleInfo;

@interface WCAdBulletScreenInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *bulletTexts;
@property (retain, nonatomic) WCAdBulletScreenTextStyleInfo *bulletTextStyle;
@property (nonatomic) double bulletShootingDelay;
@property (nonatomic) double bulletShootingDuration;
@property (nonatomic) double bulletShootingTime;
@property (nonatomic) int visibleBullets;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
