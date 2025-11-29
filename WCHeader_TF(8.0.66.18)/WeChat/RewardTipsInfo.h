@class NSString, NSMutableArray;

@interface RewardTipsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *triggerType;
@property (nonatomic) unsigned int jumpType;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *h5Link;
@property (nonatomic) unsigned long long expireTime;

+ (void)initialize;

@end
