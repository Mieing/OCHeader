@class NSString;

@interface MMLiveCloseMicReportHandler : MMLiveBaseReportHandler

@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long micId;
@property (retain, nonatomic) NSString *liveUin;
@property (nonatomic) unsigned long long lastTime;
@property (nonatomic) unsigned int closeRole;
@property (nonatomic) unsigned int hasVideo;
@property (retain, nonatomic) NSString *liveUserName;
@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long startAudienceUV;
@property (nonatomic) long long endAudienceUV;
@property (nonatomic) int isMicConnected;

+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_micId;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_closeRole;
+ (void)MMLiveReportFieldAdd_hasVideo;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_liveMicId;
+ (void)MMLiveReportFieldAdd_startTime;
+ (void)MMLiveReportFieldAdd_endTime;
+ (void)MMLiveReportFieldAdd_startAudienceUV;
+ (void)MMLiveReportFieldAdd_endAudienceUV;
+ (void)MMLiveReportFieldAdd_isMicConnected;
+ (void)initialize;

- (void)report;
- (id)init;
- (void)reportWithLiveTask:(id)a0 liveMicId:(id)a1 isMicConnected:(BOOL)a2;
- (void)doReportWidthGroupLiveTask:(id)a0 isMicConnected:(BOOL)a1;
- (void).cxx_destruct;

@end
