@protocol WAStreamPlayerInterface;

@interface WAFloatingVideoPlayerWrapper : WAFloatingViewBaseWrapper

@property (nonatomic) BOOL originEnablePageGesture;
@property (nonatomic) BOOL originEnablePageGestureFull;
@property (nonatomic) BOOL originShowDanmu;
@property (nonatomic) unsigned int originControlParam;
@property (nonatomic) BOOL originHideCoverMask;
@property (weak, nonatomic) id<WAStreamPlayerInterface> videoPlayerView;

- (void)updateFromDic:(id)a0;
- (void)setParams;
- (void)resetParams;
- (id)playerView;
- (void)pause;
- (void)play;
- (void)stop;
- (BOOL)canFloat;
- (BOOL)isLoading;
- (id)getCurrentSnapShotImage;
- (id)videoURL;
- (void).cxx_destruct;

@end
