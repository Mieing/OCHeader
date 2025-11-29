@class AWESwitchNetLoadMoreMonitor, AWESwitchNetStatusMonitor, NSString, AWESwitchNetPrepareMonitor, AWESwitchNetBlockMonitor;

@interface AWESwitchNetManager : NSObject <AWESwitchNetLongBlockProtocol>

@property (retain, nonatomic) AWESwitchNetPrepareMonitor *prepareMonitor;
@property (retain, nonatomic) AWESwitchNetBlockMonitor *blockMonitor;
@property (retain, nonatomic) AWESwitchNetStatusMonitor *netStatusMonitor;
@property (retain, nonatomic) AWESwitchNetLoadMoreMonitor *loadMoreMonitor;
@property (nonatomic) long long lastTriggerTime;
@property (nonatomic) long long switchNetEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)beginLoadMore;
- (void)setupBinding;
- (void)endLoadMore;
- (void)onLongBlockWith:(long long)a0;
- (void)onBlock:(id)a0;
- (void)triggerSwitching;
- (BOOL)ensureCanShowToast;
- (void)resetPlayPrepare;
- (void)onPlayPrepare:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)appDidEnterBackground;
- (void)resetBlock;

@end
