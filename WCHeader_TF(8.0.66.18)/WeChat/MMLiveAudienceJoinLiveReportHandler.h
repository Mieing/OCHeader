@class NSString;

@interface MMLiveAudienceJoinLiveReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *liveUin;
@property (nonatomic) unsigned int errCode;
@property (nonatomic) unsigned int enterRoomCount;
@property (nonatomic) unsigned int exitRoomCount;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int heartCount;
@property (nonatomic) unsigned int connectReqCount;
@property (nonatomic) unsigned int connectCount;
@property (retain, nonatomic) NSString *liveUserName;
@property (nonatomic) unsigned long long lastTime;
@property (nonatomic) unsigned long long enterTimestamp;
@property (nonatomic) unsigned long long exitTimestamp;
@property (nonatomic) unsigned long long exitChatroomUV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_errCode;
+ (void)MMLiveReportFieldAdd_enterRoomCount;
+ (void)MMLiveReportFieldAdd_exitRoomCount;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_connectReqCount;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_enterTimestamp;
+ (void)MMLiveReportFieldAdd_exitTimestamp;
+ (void)MMLiveReportFieldAdd_exitChatroomUV;
+ (void)initialize;

@end
