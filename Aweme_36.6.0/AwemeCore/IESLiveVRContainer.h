@class UIImageView, IESLiveVRGestureUtils, UIView, UILabel;
@protocol IESLiveVRPanoramaModeActionLinsenner, IESLiveWebPPlayer;

@interface IESLiveVRContainer : UIView

@property (retain, nonatomic) IESLiveVRGestureUtils *gestureUtils;
@property (weak, nonatomic) id<IESLiveVRPanoramaModeActionLinsenner> actionLinsener;
@property (nonatomic) float defaultZoom;
@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *iconImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) BOOL animateComplete;
@property (nonatomic) int cleanScreenGuideShowTimes;
@property (nonatomic) int landscapeGuideShowTimes;
@property (nonatomic) BOOL interactiveOpt;
@property (nonatomic) BOOL vrLandscapeEnable;
@property (nonatomic) BOOL lockScreen;

- (BOOL)canStartAnimation;
- (void)resetOrientation;
- (id)initWithActionLinsener:(id)a0 defaultZoom:(float)a1;
- (void)diggTap:(id)a0;
- (void)siggleTap:(id)a0;
- (BOOL)isWebpImage:(id)a0;
- (void)blockPanGesture:(id)a0;
- (void)addGuideView;
- (void)recordGuideShowTimes;
- (void).cxx_destruct;
- (void)setup;
- (void)resetZoom;
- (void)tapAction:(id)a0;
- (void)playAnimation;

@end
