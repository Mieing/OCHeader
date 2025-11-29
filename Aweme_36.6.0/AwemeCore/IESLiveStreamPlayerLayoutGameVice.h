@class IESLiveStreamPlayerLayoutGameViceInfo, IESLiveBackgroundView, UIView;

@interface IESLiveStreamPlayerLayoutGameVice : IESLiveStreamPlayerLayoutBase

@property (readonly, nonatomic) BOOL shouldDisplayViceView;
@property (readonly, nonatomic) long long viceLayoutType;
@property (readonly, nonatomic) double viceViewAspectRatio;
@property (nonatomic) double viceViewRightOffSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viceViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viceViewContainerFrame;
@property (retain, nonatomic) UIView *viceViewContainer;
@property (retain, nonatomic) IESLiveBackgroundView *landscapeViceBgView;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutGameViceInfo *layoutInfo;
@property (nonatomic) BOOL didConfirmSpecifyRatio;
@property (nonatomic) BOOL shouldSpecifyRatio;

- (id)viceView;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (struct CGSize { double x0; double x1; })getSpecifyRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })changeSizeWithVideoSize:(struct CGSize { double x0; double x1; })a0 specifyRatio:(struct CGSize { double x0; double x1; })a1;
- (BOOL)enableSpecifyRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainBounds;
- (id)getPullData;
- (struct CGPoint { double x0; double x1; })playerOffsetWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)handleViceViewMeta:(id)a0;
- (id)supportRoomScenes;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)rawPlayer;
- (BOOL)changeGameAndCameraPositionIfNeeded;
- (void)p_checkShouldSpecifyRatio:(BOOL)a0;
- (void)p_updateViceViewStatus;
- (void)p_layoutIfNeeded;
- (BOOL)p_shouldUseCurrentLayoutWithTrackingInfoCallback:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentStreamFrameInLandscapeScene;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentStreamFrameInPortraitScene;
- (void)addViceViewToParentView;
- (BOOL)p_checkIfNeedAddViceViewToParentView;
- (BOOL)p_shouldUseLayoutOpt;
- (struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })layoutLandscapeMainView;
- (struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })layoutPortraitMainView;
- (void)p_layoutViceViewWithData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_playerFrameHasViceViewWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_oldPlayerFrameHasViceViewWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_playerFrameInPortraitScene;
- (void)p_layoutViceViewCustomWithData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0;
- (void)p_oldLayoutViceViewCustomWithData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0;
- (BOOL)p_shouldUseInMultiViewScene;
- (id)p_specifyRatioConfig;
- (BOOL)p_specifyRatioConfigSwitch;
- (id)p_specifyRatioSupportRoomScene;
- (id)p_specifyRatioSupportPlayerScene;
- (id)p_specifyRatioSupportRatio;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (id)parentContainer;

@end
