@class NSString;

@interface NotifyMeetingSubtitle : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long uin;
@property (nonatomic) BOOL isFinal;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *openid;

+ (void)initialize;

@end
