@interface CDNClientConfig : WXPBGeneratedMessage

@property (nonatomic) int c2CshowErrorDelayMs;
@property (nonatomic) int snsshowErrorDelayMs;
@property (nonatomic) int c2CretryInterval;
@property (nonatomic) int snsretryInterval;
@property (nonatomic) int c2Crwtimeout;
@property (nonatomic) int snsrwtimeout;

+ (void)initialize;

- (void)setSnsrwtimeout:(int)a0;
- (int)snsrwtimeout;
- (void)setC2Crwtimeout:(int)a0;
- (int)c2Crwtimeout;
- (void)setSnsretryInterval:(int)a0;
- (int)snsretryInterval;
- (void)setC2CretryInterval:(int)a0;
- (int)c2CretryInterval;
- (void)setSnsshowErrorDelayMs:(int)a0;
- (int)snsshowErrorDelayMs;
- (void)setC2CshowErrorDelayMs:(int)a0;
- (int)c2CshowErrorDelayMs;

@end
