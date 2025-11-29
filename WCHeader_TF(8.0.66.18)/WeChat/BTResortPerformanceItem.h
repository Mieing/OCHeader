@interface BTResortPerformanceItem : NSObject

@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long end;
@property (nonatomic) unsigned long long getMsgListStart;
@property (nonatomic) unsigned long long getMsgListEnd;
@property (nonatomic) unsigned int msgListCount;
@property (nonatomic) unsigned long long sendCgiEnd;
@property (nonatomic) unsigned long long receiveCgiResp;
@property (nonatomic) unsigned long long updateConfigEnd;
@property (nonatomic) unsigned long long recycleRecCardStart;
@property (nonatomic) unsigned long long recycleRecCardEnd;
@property (nonatomic) unsigned long long resortMsgStart;
@property (nonatomic) unsigned long long resortMsgEnd;
@property (nonatomic) unsigned long long msgCheckStart;
@property (nonatomic) unsigned long long msgCheckEnd;
@property (nonatomic) unsigned int msgCheckCount;
@property (nonatomic) unsigned long long digestUpdateStart;
@property (nonatomic) unsigned long long digestUpdateEnd;
@property (nonatomic) unsigned int digestUpdateCount;
@property (nonatomic) unsigned long long dataBaseUpdateStart;
@property (nonatomic) unsigned long long dataBaseUpdateEnd;
@property (nonatomic) unsigned int msgUpdateCount;
@property (nonatomic) unsigned long long recCardInsertStart;
@property (nonatomic) unsigned long long recCardInsertEnd;
@property (nonatomic) unsigned long long adPosAdjustStart;
@property (nonatomic) unsigned long long adPosAdjustEnd;

- (void)printLog;

@end
