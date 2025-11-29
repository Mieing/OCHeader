@class NSString;

@interface ConversationRange : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *convId;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int msgCount;
@property (nonatomic) unsigned long long msgBeginTime;
@property (nonatomic) unsigned long long msgEndTime;
@property (nonatomic) unsigned long long msgEarliestTime;
@property (nonatomic) unsigned long long msgLatestTime;

+ (void)initialize;

@end
