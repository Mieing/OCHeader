@class HKHealthStore, WCDeviceStepObject, CMPedometer, NSMutableArray, HKObserverQuery;
@protocol WCDeviceM7LogicDelegate;

@interface WCDeviceM7Logic : MMObject {
    BOOL m_bStepGetting;
    BOOL m_bHadGetHKStep;
    BOOL m_bHadGetM7Step;
    WCDeviceStepObject *m_oStepObject;
    BOOL m_bHadObserverQuery;
    BOOL m_bForceUploadSteps;
    int m_lastGetStepTime;
    BOOL m_bHKAuthorized;
}

@property (nonatomic) double reportRandom;
@property (retain, nonatomic) CMPedometer *cmPedometer;
@property (retain, nonatomic) NSMutableArray *m_aryWhiteList;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKObserverQuery *observerQuery;
@property (weak, nonatomic) id<WCDeviceM7LogicDelegate> delegate;
@property (nonatomic) BOOL m_bDataChanged;

- (id)init;
- (void)dealloc;
- (void)updateSampleSourceList:(id)a0;
- (void)uploadYesterdayStep;
- (void)retryUploadYesterdayStep;
- (BOOL)p_canTryUploadStepCount;
- (BOOL)getM7OrHealthKitStepCount:(BOOL)a0;
- (BOOL)canUploadM7StepCount;
- (void)updateHealthStoreData;
- (void)tryDoObserverStepQuery;
- (int)getStepFromHealthKit;
- (id)hkSource2ClientSource:(id)a0;
- (BOOL)isInWhiteList:(id)a0;
- (void)getStepCount:(id)a0;
- (int)getCurrM7StepCount;
- (BOOL)getHKAuthorizationStatus;
- (void)setHealthKitAuthorized:(BOOL)a0;
- (void)checkCallDelegate;
- (void).cxx_destruct;

@end
