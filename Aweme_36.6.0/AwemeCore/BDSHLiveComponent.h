@class IESLivePlayerLynxController, NSString, IESLivePlayerControllerConfig;

@interface BDSHLiveComponent : BDSHViewComponent <IESLivePlayerControllerDelegate>

@property (retain, nonatomic) IESLivePlayerLynxController *playerController;
@property (retain, nonatomic) IESLivePlayerControllerConfig *liveConfig;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL autoplay;
@property (copy, nonatomic) NSString *objectFit;
@property (copy, nonatomic) NSString *poster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)playerFrozen:(id)a0;
- (void)playerResume:(id)a0;
- (void)updateVideoQuality:(id)a0;
- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void)executeFunction:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)contentView;
- (void)stop;
- (void)dealloc;

@end
