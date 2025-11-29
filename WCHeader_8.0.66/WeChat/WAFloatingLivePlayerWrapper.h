@protocol ITXLivePlayJSAdapter;

@interface WAFloatingLivePlayerWrapper : WAFloatingViewBaseWrapper

@property (weak, nonatomic) id<ITXLivePlayJSAdapter> livePlayer;

- (void)setParams;
- (void)resetParams;
- (id)playerView;
- (void)pause;
- (void)play;
- (void)stop;
- (BOOL)isLoading;
- (id)videoURL;
- (void).cxx_destruct;

@end
