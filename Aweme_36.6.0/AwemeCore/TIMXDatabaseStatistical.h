@class NSString, TIMXSDKInstance, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXDatabaseStatistical : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableArray *statisData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statisticalQueue;
@property (nonatomic) BOOL isStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)satisfyReport:(float)a0;
- (void)metricBatchedUpload:(id)a0;
- (void)timerCalculate;
- (void)clientMetricDB:(int)a0 timeConsuming:(long long)a1 methodsName:(id)a2;
- (void)clientMetricWSSendMsg:(int)a0 tagDic:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
