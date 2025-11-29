@class NSString, FinderSyncClientStatus_ReddotSession_ReddotInfo, NSMutableArray;

@interface FinderSyncClientStatus_ReddotSession : WXPBGeneratedMessage

@property (nonatomic) unsigned int reportScene;
@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) FinderSyncClientStatus_ReddotSession_ReddotInfo *leftReddotInfo;
@property (retain, nonatomic) FinderSyncClientStatus_ReddotSession_ReddotInfo *rightReddotInfo;
@property (nonatomic) unsigned int sessionInterval;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *leftReddotInfoList;
@property (retain, nonatomic) NSMutableArray *rightReddotInfoList;

+ (void)initialize;

- (void)setRightReddotInfoList:(id)a0;
- (id)rightReddotInfoList;
- (void)setLeftReddotInfoList:(id)a0;
- (id)leftReddotInfoList;
- (void)setSessionId:(id)a0;
- (id)sessionId;
- (void)setSessionInterval:(unsigned int)a0;
- (unsigned int)sessionInterval;
- (void)setRightReddotInfo:(id)a0;
- (id)rightReddotInfo;
- (void)setLeftReddotInfo:(id)a0;
- (id)leftReddotInfo;
- (void)setContextId:(id)a0;
- (id)contextId;
- (void)setReportScene:(unsigned int)a0;
- (unsigned int)reportScene;
- (id)description;

@end
