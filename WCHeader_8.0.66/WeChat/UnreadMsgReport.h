@class NSString;

@interface UnreadMsgReport : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceUniqueId;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) BOOL hasUnreadMsg;

+ (void)initialize;

@end
