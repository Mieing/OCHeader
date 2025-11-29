@class BDAirPlayDisplayConnection, BDAirPlayDisplayViewController;
@protocol BDAirPlayDisplayPlayerDelegate;

@interface BDAirPlayDisplayPlayer : NSObject

@property (weak, nonatomic) id<BDAirPlayDisplayPlayerDelegate> delegate;
@property (retain, nonatomic) BDAirPlayDisplayConnection *connection;
@property (readonly, nonatomic) BDAirPlayDisplayViewController *currentViewController;

- (void)resumePlay;
- (void)playWithItem:(id)a0;
- (void)setPlaySpeed:(float)a0;
- (void)playWithItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)addVolume;
- (void)reduceVolume;
- (BOOL)canPlayMedia:(unsigned long long)a0;
- (void)getSinkDeviceInfoWithMessageType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithConnection:(id)a0;
- (void)stop;
- (void)setVolume:(long long)a0;
- (void)seekTo:(long long)a0;

@end
