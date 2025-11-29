@class NSString, ConversationList;

@interface MigrationTaskInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long transferCurrent;
@property (nonatomic) unsigned long long transferTotal;
@property (nonatomic) int selectType;
@property (nonatomic) int taskType;
@property (retain, nonatomic) ConversationList *convsList;
@property (nonatomic) unsigned long long transferOnPaused;

+ (void)initialize;

@end
