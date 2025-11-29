@class NSString, NSMutableArray;

@interface ChatBotSocialHistoryWrap : NSObject

@property (retain, nonatomic) NSString *singleChatUsername;
@property (retain, nonatomic) NSMutableArray *sessionItems;
@property (nonatomic) unsigned int latestTimestamp;

- (void).cxx_destruct;

@end
