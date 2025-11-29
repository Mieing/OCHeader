@class NSTimer;
@protocol AWESwitchNetLongBlockProtocol;

@interface AWESwitchNetLoadMoreMonitor : NSObject

@property (retain, nonatomic) NSTimer *loadMoreTimer;
@property (retain, nonatomic) NSTimer *loadMoreForOfflineTimer;
@property (weak, nonatomic) id<AWESwitchNetLongBlockProtocol> delegate;

- (void)beginLoadMore;
- (void)endLoadMore;
- (void)onLoadMoreBlock;
- (void)onLoadMoreForOfflineBlock;
- (void).cxx_destruct;
- (id)init;

@end
