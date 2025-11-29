@class AWEExportCombineBusinessEventConfigModel, NSMutableArray;

@interface AWEExportCombineBusinessEventHelper : NSObject

@property (retain, nonatomic) AWEExportCombineBusinessEventConfigModel *ecbeConfigModel;
@property (retain, nonatomic) NSMutableArray *hookEvents;

+ (id)sharedInstance;

- (id)hookEventList;
- (BOOL)enableHookEvent;
- (BOOL)reportOutHookEventV3:(id)a0 params:(id)a1;
- (void)setExportCombineBusinessEventWithSession:(id)a0 time:(double)a1;
- (void)reportExportCombineBusinessEventWithSession:(id)a0 time:(double)a1;
- (void)reportExportCombineBusinessEventIfNeed;
- (void)updateExportCombineBusinessEventIfNeed;
- (id)getExportCombineRouteBizEventWithTime:(double)a0;
- (void)reportOutExportCombineBusinessEventIfNeededWithSession:(id)a0 time:(double)a1;
- (void)reportBackExportCombineBusinessEventIfNeeded:(BOOL)a0;
- (void).cxx_destruct;

@end
