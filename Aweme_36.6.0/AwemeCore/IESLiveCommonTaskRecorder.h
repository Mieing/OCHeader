@class IESLiveGCDTimer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveCommonTaskRecorder : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *tracePool;
@property (nonatomic) BOOL traceEnable;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)reportAll;
- (void)_reportWithDict:(id)a0 type:(long long)a1;
- (void)trackTaskWithLabel:(id)a0 taskType:(long long)a1 duration:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
