@class NSString;

@interface MMLiveComplaintReportHandler : MMLiveBaseReportHandler

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) unsigned long long liveUin;
@property (nonatomic) unsigned int roomRole;
@property (nonatomic) unsigned int audienceCount;
@property (retain, nonatomic) NSString *liveUserName;

+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)initialize;

- (void)report;
- (id)init;
- (void)onReportEventTriggered:(id)a0 controller:(id)a1 view:(id)a2 action:(SEL)a3 target:(id)a4;
- (void).cxx_destruct;

@end
