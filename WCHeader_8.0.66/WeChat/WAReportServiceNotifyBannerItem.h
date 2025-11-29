@class NSString;

@interface WAReportServiceNotifyBannerItem : WAReportBaseItem

@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long opTimestamp;
@property (retain, nonatomic) NSString *serviceNotifyBannerUserName;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long noticeTimestamp;
@property (nonatomic) unsigned int noticeType;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *liveId;
@property (retain, nonatomic) NSString *feedId;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
