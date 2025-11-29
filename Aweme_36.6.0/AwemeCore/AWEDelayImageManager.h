@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface AWEDelayImageManager : NSObject

@property (retain, nonatomic) NSMutableArray *delayRequests;
@property (nonatomic) BOOL isInDelayStage;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) long long releaseEachLoop;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (id)shared;

- (id)whiteList;
- (void)feedFirstFrameReady;
- (void)recordRequest:(id)a0;
- (id)bizTag:(id)a0;
- (double)delayTimeAfterFirsFrame;
- (double)releaseInterval;
- (void)releaseAllBlockImageRequest;
- (double)totalReleaseTime;
- (void)releaseBlockImageRequest;
- (BOOL)delayRequestIfNeeded:(id)a0;
- (BOOL)enable;
- (id)config;
- (void).cxx_destruct;
- (id)init;

@end
