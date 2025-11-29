@class NSString;

@interface MMLiveUserActionReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>

@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long audienceUin;
@property (nonatomic) unsigned int liveRole;
@property (nonatomic) unsigned int roomRole;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int actionResult;
@property (nonatomic) unsigned long long actionTS;
@property (retain, nonatomic) NSString *audienceUserName;
@property (retain, nonatomic) NSString *anchorusername;
@property (nonatomic) unsigned int audienceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_audienceUin;
+ (void)MMLiveReportFieldAdd_liveRole;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_action;
+ (void)MMLiveReportFieldAdd_actionResult;
+ (void)MMLiveReportFieldAdd_actionTS;
+ (void)MMLiveReportFieldAdd_audienceUserName;
+ (void)MMLiveReportFieldAdd_anchorusername;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)initialize;

- (void)report;
- (id)init;
- (void)onReportEventTriggered:(id)a0 controller:(id)a1 view:(id)a2 action:(SEL)a3 target:(id)a4;
- (void)onActionSheetClicked:(id)a0 controller:(id)a1 button:(id)a2 buttonTitle:(id)a3;
- (void)onUIOrientationChanged:(id)a0;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)a0;
- (void)reportAction:(unsigned int)a0 result:(unsigned int)a1;
- (void)doReport;
- (void).cxx_destruct;

@end
