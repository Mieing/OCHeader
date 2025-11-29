@interface GameCenterMessageRedPointInfo : NSObject

@property (nonatomic) unsigned int conversationTotalUnreadCount;
@property (nonatomic) unsigned int interactUnReadCnt;
@property (nonatomic) unsigned int noticeUnReadCnt;
@property (nonatomic) unsigned int myGroupUnReadCnt;
@property (nonatomic) unsigned long long groupLastUpdateTime;
@property (nonatomic) unsigned long long interactLastUpdateTime;
@property (nonatomic) unsigned long long noticeLastUpdateTime;
@property (nonatomic) unsigned long long gameLifeLastUpdateTime;
@property (nonatomic) unsigned long long chatVcInterNoticeTabLastUpdateTime;
@property (nonatomic) unsigned long long chatVcChatTabLastUpdateTime;
@property (nonatomic) unsigned long long lastUpdateTime;

@end
