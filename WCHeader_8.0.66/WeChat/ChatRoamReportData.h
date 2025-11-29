@class NSString;

@interface ChatRoamReportData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long brDataSize;
@property (nonatomic) unsigned long long conversationCount;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long selectedConversations;

+ (void)initialize;

@end
