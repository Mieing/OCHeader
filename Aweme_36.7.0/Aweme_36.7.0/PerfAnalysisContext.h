@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PerfAnalysisContext : NSObject {
    int _metricsType;
    unsigned long long _appStatus;
}

@property (retain, nonatomic) NSMutableDictionary *resultCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;

- (id)getCacheFor:(id)a0;
- (void)forceSaveResults:(id)a0;
- (id)getImageList;
- (void)sendingData:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)url;
- (id)metricsUrl;

@end
