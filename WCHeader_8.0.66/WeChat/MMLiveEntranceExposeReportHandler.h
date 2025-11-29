@class NSString;

@interface MMLiveEntranceExposeReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned int redDot;
@property (nonatomic) unsigned int roomRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_redDot;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)initialize;

@end
