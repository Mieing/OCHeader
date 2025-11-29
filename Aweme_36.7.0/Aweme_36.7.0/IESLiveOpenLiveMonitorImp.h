@class NSDictionary, NSLock, NSString;

@interface IESLiveOpenLiveMonitorImp : NSObject <IESLiveOpenLiveMonitor>

@property (retain, nonatomic) NSDictionary *extraCommonParams;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryKeyArray;

- (void)anchorMonitorWithServiceName:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (id)createcCategorysWithStatusCode:(id)a0 category_1:(id)a1 category_2:(id)a2 category_3:(id)a3 category_4:(id)a4 category_5:(id)a5;
- (id)createcMetricsWithDuration:(id)a0 percentage:(id)a1 rate:(id)a2 size:(id)a3;
- (void)addExtraCommonParams:(id)a0;
- (BOOL)getAnchorTopFlag;
- (id)validateCategoryValue:(id)a0;
- (id)validateMetricValue:(id)a0;
- (id)makeExtraAllToStringValue:(id)a0;
- (void).cxx_destruct;

@end
