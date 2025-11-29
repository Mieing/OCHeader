@class IESECQualityInfoV2;

@interface IESECLiveReplayTrace : NSObject

@property (retain, nonatomic) IESECQualityInfoV2 *fmpTracker;
@property (nonatomic) BOOL videoLoaded;
@property (nonatomic) BOOL viewRendered;
@property (nonatomic) BOOL didTraceReport;

- (id)initWithEnterFrom:(id)a0;
- (void)traceStart:(long long)a0;
- (void)traceEnd:(long long)a0;
- (void)traceAddExtra:(id)a0;
- (void)traceLeaveBeforeRenderIfNeeded;
- (void)traceInitialWithEnterFrom:(id)a0;
- (void).cxx_destruct;

@end
