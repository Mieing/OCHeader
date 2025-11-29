@class NSMutableArray;

@interface AWEOHRTouchFeatureRecordHelper : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL addSceneInfo;
@property (nonatomic) long long listMaxSize;
@property (nonatomic) long long recordTimeInterval;
@property (nonatomic) double moveDistanceThreshold;
@property (nonatomic) double lastRecordTime;
@property (retain, nonatomic) NSMutableArray *touchActionModelList;

+ (id)touchFeatureRecordConfig;

- (id)screenClickPositionList;
- (id)screenClickPositionListV2;
- (id)userActionTypeList;
- (void)onOHREngineCollectTouch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
