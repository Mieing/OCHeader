@class __end_, NSMutableDictionary, CADisplayLink, __cap_, NSRunLoop;

@interface LynxFPSMonitor : NSObject {
    NSRunLoop *_mainRunLoop;
    CADisplayLink *_displayLink;
    BOOL _supportsTargetTimestamp;
    BOOL _canSupportDynamicFrameRate;
    struct { double duration; unsigned int drop; double hitchDuration; } _lastFrame;
    double _lastTimestamp;
    double _lastTargetTimestamp;
    double _lastVSyncInterval;
    struct vector<LynxFPSRecord *, std::allocator<LynxFPSRecord *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _activeRecords;
    struct vector<LynxFPSRecord *, std::allocator<LynxFPSRecord *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _timeoutRecords;
    NSMutableDictionary *_keyedRecords;
}

@property (nonatomic) BOOL supportsDynamicFrameRate;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)sharedInstance;

- (id)endWithKey:(id)a0;
- (id)pauseWithKey:(id)a0;
- (id)beginWithKey:(id)a0;
- (id)recordWithKey:(id)a0;
- (void)setupDisplayLinkPaused:(BOOL)a0;
- (void)displayLinkDidUpdate:(id)a0;
- (void)onAppNotification:(id)a0;
- (void)setActive:(BOOL)a0 forRecord:(id)a1;
- (void)setState:(unsigned char)a0 forRecord:(id)a1;
- (id)setState:(unsigned char)a0 forRecordWithKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)setupNotifications;

@end
