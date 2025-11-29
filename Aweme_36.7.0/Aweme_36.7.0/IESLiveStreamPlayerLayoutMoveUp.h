@interface IESLiveStreamPlayerLayoutMoveUp : IESLiveStreamPlayerLayoutBase

@property (nonatomic) BOOL didComfireSpecifyRatio;
@property (nonatomic) BOOL shouldSpecifyRatio;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })changeSizeWithVideoSize:(struct CGSize { double x0; double x1; })a0 specifyRatio:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })playerOffsetWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (id)supportRoomScenes;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)p_specifyRatioConfig;
- (BOOL)p_specifyRatioConfigSwitch;
- (id)p_specifyRatioSupportRoomScene;
- (id)p_specifyRatioSupportPlayerScene;
- (id)p_specifyRatioSupportRatio;
- (void)p_checkNeedConfirmSpecifyRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentStreamFrame;
- (BOOL)enableSpecifyRatioWith:(BOOL)a0;
- (BOOL)shouldPresentDoubleInteractionPlayerView;
- (id)specifyRatioSupportRoomScenes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;

@end
