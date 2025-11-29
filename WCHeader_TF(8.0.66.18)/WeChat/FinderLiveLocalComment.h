@class NSMutableArray;

@interface FinderLiveLocalComment : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *msgList;
@property (retain, nonatomic) NSMutableArray *appMsgList;
@property (nonatomic) unsigned int onlineCnt;
@property (nonatomic) unsigned int curParticipantCount;
@property (nonatomic) unsigned long long likeCnt;
@property (nonatomic) unsigned long long liveHeatValue;
@property (nonatomic) BOOL enableShowHeat;

+ (void)initialize;

@end
