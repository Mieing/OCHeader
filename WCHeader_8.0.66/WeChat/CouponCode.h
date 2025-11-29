@class NSString;

@interface CouponCode : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *code;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int useTime;

+ (void)initialize;

@end
