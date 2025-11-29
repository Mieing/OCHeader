@class IESLiveRightBottomMutuallyExclusiveItem, IESLiveExplainBarInfoView, NSMutableDictionary, NSString, UIView, HTSLiveCommentaryRoomInfo, IESLiveExplainWindowInfoView;

@interface IESLiveExplainRoomFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction, IESLiveSEIListener, HTSLiveMessageSubscriber, IESLiveAutoRotateAction, IESLiveExplainRouter, IESLiveAirPlayAction, IESLivePublicScreenLayoutSubscriber>

@property (nonatomic) BOOL isNeedShowVice;
@property (nonatomic) BOOL hadInitialWindow;
@property (nonatomic) BOOL isCameraFirst;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) IESLiveExplainWindowInfoView *windowView;
@property (retain, nonatomic) UIView *placeHolder;
@property (retain, nonatomic) IESLiveExplainBarInfoView *barInfoView;
@property (retain, nonatomic) NSMutableDictionary *explainRoomInfos;
@property (retain, nonatomic) HTSLiveCommentaryRoomInfo *currentCommentaryRoomInfo;
@property (retain, nonatomic) NSString *currentSEIRoomID;
@property (nonatomic) BOOL hadTrackShow;
@property (nonatomic) BOOL needDeferRealoadVice;
@property (nonatomic) BOOL needDeferChangeOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)onViceViewInitSetup:(id)a0;
- (void)onViceViewHiddenChange:(BOOL)a0;
- (void)changeDisplayFor:(BOOL)a0;
- (void)airplayStateDidChange:(BOOL)a0;
- (void)onAirplayClose;
- (BOOL)isExplainBarShow;
- (double)explainBarFrameY;
- (void)showRightBottom:(BOOL)a0;
- (void)showBottomBarIfNeed:(BOOL)a0;
- (void)hideRightBottom;
- (void)hideBottomBar;
- (void)updateMatchInfoIfNeed;
- (void)initShowViceView:(id)a0;
- (void)initShowBottomBarView;
- (void)updateMainEvent:(id)a0;
- (void)trackInfoShowEvent;
- (void)showUserProfile;
- (void)trackInfoClickEvent;
- (void)onWindowViewClick;
- (void)onBarInfoClick;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
