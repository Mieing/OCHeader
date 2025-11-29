@class NSLock, NSMutableArray;

@interface BDASplashMetricInfoStore : NSObject

@property (retain, nonatomic) NSMutableArray *metricInfo;
@property (retain, nonatomic) NSLock *metricInfoLock;

+ (id)shareInstance;

- (void)storeInfoWithAdId:(id)a0 errorCode:(unsigned long long)a1;
- (void)clearMetricInfo;
- (id)metricInfoStr;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;

@end
