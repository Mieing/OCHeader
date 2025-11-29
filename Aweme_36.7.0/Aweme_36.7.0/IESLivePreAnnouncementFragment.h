@class NSString, IESLivePreAnnouncementDragJudgeUtil, IESLivePreAnnouncementViewModel, UIView, IESLiveAnnouncementViewModel, IESLiveGCDTimer;
@protocol IESLiveAnnouncementService, IESLiveAnnouncementStickerViewProtocol;

@interface IESLivePreAnnouncementFragment : IESLiveRoomComponent <IESLivePreAnnouncementReaction, IESLiveHighlightContainerSyncDataStrategySubscriber, IESLiveAnchorRoomStatusChangeEvents, IESLiveAnchorToolsModulePreAnnouncementInterface>

@property (retain, nonatomic) IESLivePreAnnouncementViewModel *viewModel;
@property (retain, nonatomic) UIView<IESLiveAnnouncementStickerViewProtocol> *panelView;
@property (retain, nonatomic) id<IESLiveAnnouncementService> announcementService;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *announcementViewModel;
@property (retain, nonatomic) NSString *dateTimeString;
@property (nonatomic) BOOL audiencePanelClosed;
@property (nonatomic) BOOL hasCheckAutoPublish;
@property (nonatomic) BOOL audienceHasCountDown;
@property (nonatomic) double audienceCountDownSecond;
@property (retain, nonatomic) IESLiveGCDTimer *fadeTimer;
@property (nonatomic) long long currentHighlightingAnnouncementID;
@property (nonatomic) long long lastHighlightingAnnouncementID;
@property (nonatomic) long long anchorCurrentHighlightingAnnouncementID;
@property (retain, nonatomic) IESLivePreAnnouncementDragJudgeUtil *dragJudgeUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)startAnchorLiveWithRoom:(id)a0;
- (id)appointmentCount:(long long)a0;
- (void)showPanelView:(id)a0;
- (void)highlightContainerSyncDataReceived:(id)a0;
- (id)highlightViewTypes;
- (BOOL)checkValidHighlightItem:(id)a0;
- (BOOL)redDotHasShow;
- (void)handleItemRedDot:(id)a0;
- (void)setRedDotShow:(BOOL)a0;
- (id)redDotShowKey;
- (void)removePreAnnouncement;
- (void)updateWithNumber:(long long)a0;
- (void)announcementPanelViewHide:(id)a0;
- (void)loginWithEntriesInfo:(id)a0 completion:(id /* block */)a1;
- (void)hideCurrentPreAnnouncement;
- (void)showCurrentPreAnnouncement;
- (void)addPreAnnouncementItem;
- (void)removeAudienceFadeTimer;
- (void)publishAnnouncementSticker;
- (BOOL)isShowPreAnnouncementView;
- (void)addAudienceFadeTimer;
- (void)gotoEditWithCompletion:(id /* block */)a0 entranceType:(long long)a1;
- (void)removePreAnnouncementView;
- (BOOL)audienceShouldCountDownFade;
- (void)unpublishAnnouncementSticker;
- (void)updatePinPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)audienceTimeOutAction;
- (void).cxx_destruct;
- (BOOL)isSubscribed;
- (void)hideHighlight;
- (void)showHighlight;

@end
