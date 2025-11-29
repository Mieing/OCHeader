@class HMInstance;

@interface HMDMonitorCurve2 : HMDMonitorCurve

@property (retain, nonatomic) HMInstance *instance;

- (void)dropAllDataForServerState;
- (void)pushRecordToDBImmediately:(id)a0;
- (id)initWithCurveName:(id)a0 recordClass:(Class)a1;
- (void)pushRecord:(id)a0;
- (void)applicationEnterBackground:(id)a0;
- (void)recordDataDirectly:(id)a0;
- (void).cxx_destruct;

@end
