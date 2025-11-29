@class NSString;

@interface HBReceiveUser : WXPBGeneratedMessage

@property (nonatomic) unsigned long long receiveAmount;
@property (nonatomic) unsigned long long receiveTime;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headimg;
@property (nonatomic) unsigned int isFriend;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *gameTips;

+ (void)initialize;

@end
