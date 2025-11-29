@class NSString;

@interface ChatroomNotice : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *noticeText;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) unsigned int updaterUin;

+ (void)initialize;

@end
