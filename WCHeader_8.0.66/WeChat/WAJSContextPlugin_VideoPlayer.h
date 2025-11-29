@class WAPluginComponent_VideoPlayer;

@interface WAJSContextPlugin_VideoPlayer : WAJSContextPluginBase

@property (retain, nonatomic) WAPluginComponent_VideoPlayer *sysCoverViewVideoComponent;
@property (retain, nonatomic) WAPluginComponent_VideoPlayer *splashAdVideoComponent;

- (id)init;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (id)insertVideo:(id)a0 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 videoId:(unsigned int)a2 parentId:(unsigned int)a3 referrerPolicyType:(unsigned long long)a4 backgroundColor:(id)a5 dest:(long long)a6;
- (id)getVideoPlayer:(unsigned int)a0 dest:(long long)a1;
- (id)getVolumeSliderWithDest:(long long)a0;
- (BOOL)operateVideoPlayer:(id)a0 videoId:(unsigned int)a1;
- (id)getCurrentSnapshotWithDest:(long long)a0;
- (void)disableFullScreenWithDest:(long long)a0;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1 dest:(long long)a2;
- (BOOL)removeVideoPlayer:(unsigned int)a0 dest:(long long)a1;
- (id)getVideoComponentWithDest:(long long)a0;
- (void).cxx_destruct;

@end
