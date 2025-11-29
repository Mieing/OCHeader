@class NSString, NSMutableArray;

@interface BDVCastMirrorSink : BDVCastMirror

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *connectedIP;
@property (nonatomic) int connectedPort;
@property (retain, nonatomic) NSMutableArray *whenStart;
@property (retain, nonatomic) NSMutableArray *whenDisconnected;
@property (retain, nonatomic) NSMutableArray *whenStop;
@property (readonly, nonatomic) BOOL isStarted;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isCastRequested;

+ (id)encrypt:(id)a0 withBase64Key:(id)a1;
+ (id)keyPathsForValuesAffectingIsStarted;
+ (id)keyPathsForValuesAffectingIsConnected;
+ (id)keyPathsForValuesAffectingIsCastRequested;

- (id)initWithVideoQueue:(id)a0 audioQueue:(id)a1;
- (void)disconnectThen:(id /* block */)a0;
- (void)didStartWithType:(int)a0;
- (void)didConnectWithType:(int)a0 ip:(id)a1 port:(int)a2 data:(id)a3;
- (BOOL)onCastRequestWithIP:(id)a0 token:(id)a1;
- (void)onCastCancelWithIP:(id)a0 startTime:(long long)a1 endTime:(long long)a2;
- (void)didDisconnectWithType:(int)a0 ip:(id)a1 port:(int)a2 reason:(int)a3 data:(id)a4;
- (void)startThen:(id /* block */)a0;
- (void)consumeActions:(id)a0;
- (void)disconnectWithIP:(id)a0 port:(int)a1 then:(id /* block */)a2;
- (void)stopThen:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)restart;
- (void)start;
- (void)didStop;

@end
