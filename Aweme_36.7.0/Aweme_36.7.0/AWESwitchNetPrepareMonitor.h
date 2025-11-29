@protocol AWESwitchNetLongBlockProtocol;

@interface AWESwitchNetPrepareMonitor : NSObject

@property (nonatomic) long long prepareButNotRenderCount;
@property (nonatomic) double lastRenderTime;
@property (weak, nonatomic) id<AWESwitchNetLongBlockProtocol> delegate;

- (void)resetPlayPrepare;
- (void)onPlayPrepare:(double)a0;
- (void)onPrepareBlock;
- (void).cxx_destruct;
- (id)init;

@end
