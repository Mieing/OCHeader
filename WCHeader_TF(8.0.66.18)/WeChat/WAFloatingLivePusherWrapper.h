@protocol ITXLivePushJSAdapter;

@interface WAFloatingLivePusherWrapper : WAFloatingViewBaseWrapper

@property (weak, nonatomic) id<ITXLivePushJSAdapter> livePusher;

- (id)playerView;
- (void)pause;
- (void)play;
- (void)stop;
- (void).cxx_destruct;

@end
