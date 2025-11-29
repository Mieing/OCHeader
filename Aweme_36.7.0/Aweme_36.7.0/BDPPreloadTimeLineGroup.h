@class NSString, NSMutableArray;

@interface BDPPreloadTimeLineGroup : NSObject

@property (copy, nonatomic) NSString *entryType;
@property (copy, nonatomic) NSString *preloadId;
@property (retain, nonatomic) NSMutableArray *timeLineArr;
@property (nonatomic) BOOL disableCheckGlobalMeminfo;
@property (nonatomic) BOOL disableLowValuePoint;
@property (nonatomic) double runtimePreloadStartTime;
@property (nonatomic) double pluginRuntimePreloadStartTime;
@property (nonatomic) double webviewPreloadStartTime;
@property (nonatomic) double pkgPredownloadStartTime;
@property (nonatomic) double workerPreloadStartTime;
@property (nonatomic) long long timerId;

- (id)initWithEnterType:(id)a0 preloadId:(id)a1;
- (void)addPoint:(id)a0 type:(id)a1 time:(double)a2 params:(id)a3 commonParams:(id)a4;
- (void)finishAndUploadTimeline;
- (BOOL)isTimeLineHighValue;
- (void).cxx_destruct;

@end
