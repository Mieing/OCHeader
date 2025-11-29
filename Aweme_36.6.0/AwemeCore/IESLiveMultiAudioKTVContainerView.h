@class HTSEventForwardingView, IESLiveMultiAudioKTVGuestScrollBar, IESLiveKTVPreStreamContext, IESLiveMultiKTVStore, MASConstraint, NSMutableArray, UIView, NSString, IESLiveMultiKTVStageDirector, NSArray, IESLiveMultiKTVBasicInfo, IESLiveMultiAudioKTVAnchorSeatView, IESLiveMultiKTVAudioStageController;
@protocol IESLiveInteractVoiceWaveRouter, IESLivePlayerProtocol;

@interface IESLiveMultiAudioKTVContainerView : UIView <IESLiveMultiAudioKTVStageViewProtocol>

@property (retain, nonatomic) IESLiveMultiAudioKTVAnchorSeatView *anchorSeatView;
@property (retain, nonatomic) HTSEventForwardingView *anchorSeatPointView;
@property (retain, nonatomic) IESLiveMultiAudioKTVGuestScrollBar *guestScrollBar;
@property (retain, nonatomic) UIView *devideLine;
@property (copy, nonatomic) NSArray *guestSeats;
@property (retain, nonatomic) NSMutableArray *guestSeatsCache;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL smallMode;
@property (retain, nonatomic) MASConstraint *seatBottomConstraint;
@property (retain, nonatomic) IESLiveMultiKTVBasicInfo *basicInfo;
@property (retain, nonatomic) IESLiveMultiKTVStore *ktvStore;
@property (retain, nonatomic) IESLiveKTVPreStreamContext *preStreamContext;
@property (weak, nonatomic) id<IESLiveInteractVoiceWaveRouter> voiceWaveRouter;
@property (retain, nonatomic) IESLiveMultiKTVAudioStageController *stageController;
@property (retain, nonatomic) IESLiveMultiKTVStageDirector *ktvDirector;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)ktvPreStreamContext;
- (void)smoothExitRoomToPreview;
- (void)updateAnchorInfo:(id)a0;
- (void)setupVoiceWaveRouter:(id)a0;
- (void)handleSEIData:(id)a0;
- (void)smoothEnterRoomFromPreview;
- (void)onMessageReceivedFromPrestream:(id)a0 withDict:(id)a1;
- (id)reuseKTVStageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnchor:(BOOL)a1 smallMode:(BOOL)a2;
- (void)renderWithBasicInfo:(id)a0;
- (void)updateIsPreview:(BOOL)a0;
- (void)didSwitchToStageMode:(unsigned long long)a0;
- (void)attachDIContextFromPrestream:(id)a0;
- (void)updateSeatsUserInfo:(id)a0;
- (void)updateLyricMode:(BOOL)a0;
- (void)setupGuestListViewWithGuestCount:(long long)a0;
- (void)removeAllGuestSeatsView;
- (double)getProperSpacerBetweenGuestSeats;
- (void)didTapSingleSeatView:(id)a0;
- (double)seatsHorizontalSpace;
- (BOOL)enableSmoothEnterRoom;
- (void)setupGuestListViewWithAllMembersList:(id)a0;
- (id)findTargetEmptyViewWithActualIndex:(long long)a0 skipIndex:(long long)a1;
- (BOOL)isKTVThemeEnabled;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupViews;

@end
