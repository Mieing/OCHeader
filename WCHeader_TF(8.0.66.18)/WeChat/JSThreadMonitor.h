@interface JSThreadMonitor : NSObject {
    struct Monitor { struct Tracker { struct { float x0; float x1; } x0; float x1; BOOL x2; float x3; } x0; struct CallStackPool { id x0; unsigned int x1; unsigned int x2; int x3; int x4; } x1; struct _opaque_pthread_t *x2; unsigned int x3; void /* function */ *x4; struct timeval { long long x0; int x1; } x5; struct OpaqueJSContextGroup *x6; unsigned int x7; float x8; float x9; int x10; BOOL x11; BOOL x12; BOOL x13; unsigned char x14; } *_monitor;
}

@property (nonatomic) float threashold;
@property (nonatomic) int duration;
@property (nonatomic) void /* function */ *callback;

+ (id)defaultMonitor;
+ (void)setupWithTime:(int)a0 threashold:(float)a1 callback:(void /* function */ *)a2;
+ (void)setupWithCallback:(void /* function */ *)a0;

- (id)init;
- (void)updateTID;
- (void)dealloc;
- (void)start;
- (void)setTickLimit:(unsigned int)a0;
- (void)setEnableMainThread:(BOOL)a0;
- (void)stop;

@end
