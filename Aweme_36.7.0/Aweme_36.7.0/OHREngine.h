@class UIWindow, NSArray, OHRScrollEventCollector, NSObject;
@protocol OS_dispatch_queue, OHRServiceProtocol;

@interface OHREngine : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSArray *predictEngines;
@property (weak, nonatomic) UIWindow *window;
@property (retain, nonatomic) OHRScrollEventCollector *scrollEventCollector;
@property (nonatomic) long long state;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) double startTimeStamp;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *predictQueue;
@property (weak, nonatomic) id<OHRServiceProtocol> delegate;
@property (nonatomic) long long sampleSize;

+ (id)sharedEngine;

- (void)receiveTouchEvent:(id)a0 onWindow:(id)a1;
- (void)collectTouch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
