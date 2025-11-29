@class HMDThreadSafeArray, NSArray;

@interface AWETokamakExceptionMonitor : NSObject

@property (retain, nonatomic) HMDThreadSafeArray *netPathArr;
@property (retain, nonatomic) HMDThreadSafeArray *logidArr;
@property (retain, nonatomic) HMDThreadSafeArray *netHostJoinPathAndLogidArr;
@property (nonatomic) unsigned long long maxCount;
@property (retain, nonatomic) NSArray *pathFilterArr;

+ (id)shareInstance;

- (void)receiveNetworkFinishNotification:(id)a0;
- (void)handleMemoryWarning:(id)a0;
- (void)startExceptionMonitor;
- (void)registTTNetNotification;
- (void)pathFilter:(id)a0 logid:(id)a1 host:(id)a2;
- (void)recordDataWithPathStr:(id)a0 logid:(id)a1 host:(id)a2;
- (void)reportToHMDCustomContextVal:(id)a0 netpaths:(id)a1 joinedStrArr:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
