@class NSObject;
@protocol OS_dispatch_queue;

@interface BDVCastMirror : NSObject {
    struct LocalServer { struct ILocalServerListener *x0; struct FactoryMediaServer *x1; struct CallBack *x2; BOOL x3; } *_vcastServer;
    struct BDVCastHandler { void /* function */ **x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; } *_vcastHandler;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *videoQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;

- (id)getRTMPURL;
- (void)asyncVideo:(id /* block */)a0;
- (void)asyncAudio:(id /* block */)a0;
- (id)initWithVideoQueue:(id)a0 audioQueue:(id)a1;
- (void)didStartWithType:(int)a0;
- (void)didConnectWithType:(int)a0 ip:(id)a1 port:(int)a2 data:(id)a3;
- (BOOL)onCastRequestWithIP:(id)a0 token:(id)a1;
- (void)onCastCancelWithIP:(id)a0 startTime:(long long)a1 endTime:(long long)a2;
- (void)didDisconnectWithType:(int)a0 ip:(id)a1 port:(int)a2 reason:(int)a3 data:(id)a4;
- (void)onVideoData:(id)a0 pts:(unsigned long long)a1;
- (void)onAudioData:(id)a0 pts:(unsigned long long)a1;
- (void)onLogWithLevel:(int)a0 content:(id)a1;
- (void)onStuckWithStuckMs:(int)a0 stuckMsTotal:(int)a1 stuckCount:(int)a2 pts:(unsigned int)a3 isVideo:(BOOL)a4;
- (void)syncInMain:(id /* block */)a0;
- (void)onErrorWithWhat:(int)a0 extra:(int)a1;
- (void)asyncInMain:(id /* block */)a0;
- (void)onMessageWithEvent:(id)a0 content:(id)a1;
- (void)onMonitorWithEvent:(id)a0 content:(id)a1;
- (void)onStatisticsWithSize:(int)a0 delay:(int)a1;
- (void)asyncInQueue:(id)a0 action:(id /* block */)a1;
- (struct LocalServer { struct ILocalServerListener *x0; struct FactoryMediaServer *x1; struct CallBack *x2; BOOL x3; } *)vcastServer;
- (void)disconnectWithIP:(id)a0 port:(int)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)syncValueForKey:(id)a0;
- (void)didStop;

@end
