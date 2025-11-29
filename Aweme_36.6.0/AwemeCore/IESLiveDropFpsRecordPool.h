@class NSMutableDictionary;

@interface IESLiveDropFpsRecordPool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) double normalDropTime;
@property (nonatomic) long long normalDropCount;
@property (nonatomic) double mediumDropTime;
@property (nonatomic) long long mediumDropCount;
@property (nonatomic) double criticalDropTime;
@property (nonatomic) long long criticalDropCount;
@property (nonatomic) double totalFps;
@property (nonatomic) long long fpsCount;
@property (retain, nonatomic) NSMutableDictionary *dropFrameDictionary;
@property (nonatomic) double normalHitchTime;
@property (nonatomic) double mediumHitchTime;
@property (nonatomic) double criticalHitchTime;
@property (nonatomic) double totalHitchTime;

- (void)clearInfo;
- (void)addFpsRecord:(double)a0;
- (id)getRecordInfo;
- (void)addDropFrameRecord:(id)a0 generateOriginInfo:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
