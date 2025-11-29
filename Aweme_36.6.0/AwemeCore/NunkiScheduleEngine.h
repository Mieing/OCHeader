@class NSDictionary, NSString;

@interface NunkiScheduleEngine : NSObject <NunkiScheduleEngineService>

@property (copy, nonatomic) NSDictionary *schedulerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleWithKey:(id)a0 strategyResult:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (id)resultFromScheduleWithKey:(id)a0 strategyResult:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (BOOL)optionFromScheduleWithKey:(id)a0 strategyResult:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (void)alogMonitorWithKey:(id)a0;
- (void).cxx_destruct;

@end
