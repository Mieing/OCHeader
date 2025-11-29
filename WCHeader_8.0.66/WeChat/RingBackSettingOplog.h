@class NSString;

@interface RingBackSettingOplog : WXPBGeneratedMessage

@property (nonatomic) unsigned int setting;
@property (nonatomic) unsigned long long finderObjectId;
@property (retain, nonatomic) NSString *finderNonceId;
@property (nonatomic) unsigned int startTs;
@property (nonatomic) unsigned int endTs;
@property (retain, nonatomic) NSString *userName;

+ (void)initialize;

@end
