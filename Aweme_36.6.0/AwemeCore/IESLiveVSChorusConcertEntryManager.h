@class NSString, UIView;
@protocol IESLiveRoomService;

@interface IESLiveVSChorusConcertEntryManager : NSObject <IESLiveVSChorusConcertEntryManagerRouter, IESLiveChorusConcertActions, HTSLiveStreamPlayerAction, IESLiveSeekAction, IESLiveFIFAPlayerScaleAction, IESLiveAutoRotateAction, HTSLiveHideComponentAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) unsigned long long chorusPosition;
@property (retain, nonatomic) UIView *preventSeekView;
@property (retain, nonatomic) UIView *preventPauseView;
@property (nonatomic) BOOL ifActiveChorus;
@property (nonatomic) double containerRatio;
@property (nonatomic) BOOL isShowingComponent;
@property (retain, nonatomic) UIView *chorusContainer;
@property (nonatomic) BOOL chorusContainerIsShowing;
@property (nonatomic) BOOL isJoiningChorus;
@property (nonatomic) BOOL currentProgressIsNew;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideComponent;
- (void)showComponent;
- (void)didSetAttachingDIContext;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)hideComponentsForPortrait;
- (void)showComponentsForPortrait;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)didForceUpdateToOrientation:(long long)a0;
- (void)updatePublicScreenHeight;
- (void)playerDidEndplayInSmallWindow;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)unlockScreen;
- (void)progressStateChange:(BOOL)a0;
- (void)onChorusStateChanged:(long long)a0;
- (void)onConcertStageStateChanged:(long long)a0;
- (void)onOrientationTransitionEnd:(long long)a0;
- (void)layoutForLandscape;
- (void)didTapProgress:(id)a0;
- (unsigned long long)getEntryPosition;
- (void)layoutForVerticalHorizontal;
- (void)layoutForVerticalPortrait;
- (void)hideChorusContainer;
- (void)showChorusContainer;
- (void)layoutChorusContainer;
- (void)forbidSeekInsteadOfShowToast;
- (void)reopenSeek;
- (void)didPanProgress:(id)a0;
- (BOOL)shouldChangeChorusContainer;
- (void).cxx_destruct;
- (void)lockScreen;
- (id)initWithRoom:(id)a0;

@end
