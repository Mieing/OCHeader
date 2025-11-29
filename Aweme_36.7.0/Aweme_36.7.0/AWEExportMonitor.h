@class AWEExportCombineBusinessEventConfigModel, NSMutableArray;

@interface AWEExportMonitor : NSObject

@property (retain, nonatomic) AWEExportCombineBusinessEventConfigModel *ecbeConfigModel;
@property (retain, nonatomic) NSMutableArray *hookEvents;

+ (id)sharedInstance;

- (void)reportOutWithUrl:(id)a0 authInfo:(id)a1 status:(long long)a2 resultMessage:(id)a3 isForeground:(BOOL)a4;
- (id)generateCustomsOutInfosWithUrl:(id)a0;
- (id)generateRouteOutSession;
- (void)reportBackIfNeededIsCold:(BOOL)a0;
- (id)buildOutParams:(id)a0 authInfo:(id)a1 status:(long long)a2 resultMessage:(id)a3 isForeground:(BOOL)a4 fromScene:(id)a5 leaveType:(unsigned long long)a6 extraInfo:(id)a7;
- (id)targetAppForURL:(id)a0 leaveType:(unsigned long long)a1;
- (id)mapLeaveType:(unsigned long long)a0;
- (void)reportOutWithType:(unsigned long long)a0 resultMessage:(id)a1 extraInfo:(id)a2;
- (id)hookEventList;
- (BOOL)enableHookEvent;
- (BOOL)reportOutHookEventV3:(id)a0 params:(id)a1;
- (void)setExportCombineBusinessEventWithSession:(id)a0 time:(double)a1;
- (void)reportExportCombineBusinessEventWithSession:(id)a0 time:(double)a1;
- (void)reportExportCombineBusinessEventIfNeed;
- (void)updateExportCombineBusinessEventIfNeed;
- (id)getExportCombineRouteBizEventWithTime:(double)a0;
- (id)buildOutPageList:(id)a0 timeStamp:(id)a1;
- (void).cxx_destruct;
- (void)setup;
- (void)appWillEnterForeground;

@end
