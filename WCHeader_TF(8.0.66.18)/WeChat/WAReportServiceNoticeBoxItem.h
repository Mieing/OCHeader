@class NSString;

@interface WAReportServiceNoticeBoxItem : WAReportBaseItem

@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long opTimestamp;
@property (retain, nonatomic) NSString *serviceNoticeBoxUserName;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long noticeTimestamp;
@property (nonatomic) unsigned int inBoxIndex;
@property (nonatomic) unsigned int isMuted;
@property (nonatomic) unsigned int firstExpose;
@property (nonatomic) unsigned int noticeType;
@property (nonatomic) unsigned int isRed;
@property (nonatomic) unsigned int redCount;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSString *liveId;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *serviceNoticeSessionId;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
