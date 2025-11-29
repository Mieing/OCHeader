@class AWEFormatXPlayClientConfig, NSString, UIView;
@protocol AWEFormatXPlayItemDelegate, XPlayItemProtocol;

@interface AWEFormatXPlayInterfaceImpl : NSObject <XPlayItemDelegate, XPlayCloudMessageDelegate, AWEFormatXPlayInterface>

@property (retain, nonatomic) id<XPlayItemProtocol> item;
@property (retain, nonatomic) AWEFormatXPlayClientConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<AWEFormatXPlayItemDelegate> itemDelegate;

- (void)itemLoadSuccess:(id)a0;
- (void)itemLoadFailed:(id)a0 error:(id)a1 logId:(id)a2;
- (void)playItem:(id)a0 preloadDidFailed:(id)a1;
- (void)playItem:(id)a0 preloadDidSucceed:(id)a1;
- (void)playItem:(id)a0 playStatusDidUpdated:(unsigned long long)a1 info:(id)a2;
- (void)didReceiveRTCCustomMessageWithString:(id)a0;
- (void)didReceivePodMiddlewareMessage:(id)a0;
- (void)needQueue;
- (void)setAudioMute:(BOOL)a0;
- (void)playItem:(id)a0 canJoinQueue:(id)a1 callback:(id /* block */)a2;
- (void)playItem:(id)a0 didUpdateQueueInfo:(id)a1;
- (void)playItem:(id)a0 didFinishQueue:(id)a1;
- (void)sendRTCCustomMessageWithString:(id)a0 callback:(id /* block */)a1;
- (void)loadItem;
- (void)setupXPlayWithConfig;
- (id)convertJoinQueueToFormatQueueConfig:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (void)setVolume:(long long)a0;
- (void)preload;
- (void)resume;
- (id)initWithConfig:(id)a0;

@end
