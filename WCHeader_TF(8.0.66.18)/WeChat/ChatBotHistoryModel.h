@class NSString, NSMutableArray, NSMutableSet;

@interface ChatBotHistoryModel : NSObject

@property (retain, nonatomic) NSString *singleChatUsername;
@property (nonatomic) unsigned int latestTimestamp;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) NSMutableArray *rows;
@property (nonatomic) long long itemstatus;
@property (retain, nonatomic) NSMutableSet *sessionIds;

- (id)initWithHistoryWrap:(id)a0 itemStatus:(long long)a1 oldModel:(id)a2;
- (void).cxx_destruct;

@end
