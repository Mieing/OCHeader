@class NSString;

@interface InviteThirdNotifyData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long roomkey;
@property (retain, nonatomic) NSString *subappid;

+ (void)initialize;

@end
