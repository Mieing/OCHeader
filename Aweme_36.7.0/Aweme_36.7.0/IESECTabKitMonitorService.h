@class IESECTabKitTimingCategory, NSString, IESECServiceProxy, NSDictionary, NSMutableDictionary, IESECTabKitTimingMetric;
@protocol IESECTabKitHybridService, IESECTabKitDataService;

@interface IESECTabKitMonitorService : IESECTabKitService <IESECTabKitMonitorService> {
    double _tabKitCreateTime;
    NSMutableDictionary *_enterBackgroundRecord;
    NSMutableDictionary *_tabElementTimingDict;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitHybridService> *hybridService;
@property (retain, nonatomic) IESECTabKitTimingCategory *category;
@property (retain, nonatomic) IESECTabKitTimingMetric *metric;
@property (copy, nonatomic) NSDictionary *bootPerfTiming;
@property (copy, nonatomic) NSDictionary *deliveryPerfTiming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportWithEventName:(id)a0 metric:(id)a1 category:(id)a2;
- (BOOL)isTabKitDidBackGround:(unsigned long long)a0;
- (void)reportFirstScreenWithTabPerf:(id)a0;
- (void)reportSwitchTabWithTabPerf:(id)a0;
- (void)tabKitDidCreate;
- (void)tabKitDidBackGround;
- (void)tabElementDidCreate:(id)a0;
- (void)tabElementDidEnter:(id)a0;
- (void)tabElementDidLeave:(id)a0;
- (void)tabDataRequestDidStart:(id)a0;
- (void)tabDataRequestDidEnd:(id)a0;
- (void)tabHybridViewDidCreate:(id)a0;
- (void)tabHybridViewDidFinishLoad:(id)a0;
- (id)timingModelForTabModel:(id)a0;
- (void)configCategoryWithParameters:(id)a0;
- (id)tabElementKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
