@class NSString;

@interface ChatBotHistorySummaryItem : ChatBotHistoryItem

@property (nonatomic) unsigned int latestTimestamp;
@property (retain, nonatomic) NSString *singleChatUsername;
@property (nonatomic) BOOL isExpanded;

- (id)init;
- (void).cxx_destruct;

@end
