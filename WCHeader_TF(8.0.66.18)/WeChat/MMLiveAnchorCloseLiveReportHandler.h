@class NSString;

@interface MMLiveAnchorCloseLiveReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) unsigned int roomRole;
@property (nonatomic) unsigned int lastTime;
@property (nonatomic) unsigned int audienceCount;
@property (nonatomic) unsigned int audienceCountMax;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int heartCount;
@property (nonatomic) unsigned int connectCount;
@property (nonatomic) unsigned int allowReplay;
@property (nonatomic) unsigned int roomCount;
@property (nonatomic) unsigned long long costTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_audienceCountMax;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_allowReplay;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_costTime;
+ (void)initialize;

@end
