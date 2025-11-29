@class NSString;

@interface TingPlayAppConfigData : WXPBGeneratedMessage

@property (nonatomic) int identifier;
@property (nonatomic) int tingBizType;
@property (nonatomic) int playTaskType;
@property (retain, nonatomic) NSString *floatBallKey;
@property (retain, nonatomic) NSString *sessionKey;
@property (nonatomic) int floatBallBizType;

+ (void)initialize;

@end
