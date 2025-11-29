@class NSString, MMListenUserInfo;

@interface MMListenBarrageItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *barrageId;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) MMListenUserInfo *user;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) int time;

+ (void)initialize;

@end
