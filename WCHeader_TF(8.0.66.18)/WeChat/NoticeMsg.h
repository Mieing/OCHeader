@class NSString;

@interface NoticeMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSString *noticeText;
@property (nonatomic) BOOL highlight;

+ (void)initialize;

@end
