@interface IESLandscapeFPSRecordPool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) long long level1DropCount;
@property (nonatomic) long long level2DropCount;
@property (nonatomic) long long level3DropCount;
@property (nonatomic) long long level4DropCount;
@property (nonatomic) double totalFps;
@property (nonatomic) long long fpsCount;
@property (nonatomic) long long dropMax;
@property (nonatomic) long long realFpsCount;
@property (nonatomic) long long blockDuration;
@property (nonatomic) double startRecordTime;

- (void)clearInfo;
- (void)addDropFrameRecord:(id)a0;
- (void)addFpsRecord:(double)a0;
- (id)getRecordInfo;
- (id)init;
- (void)dealloc;

@end
