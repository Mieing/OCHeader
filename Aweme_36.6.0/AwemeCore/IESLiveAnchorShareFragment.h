@class IESLiveAnchorSharePitayaHandler, NSString, HTSLiveToolbarItem, LOTAnimationView, IESLiveAnchorFansGroupShareIntegration;
@protocol IESLiveShareService;

@interface IESLiveAnchorShareFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveSharePanelRouter, IESLiveAnchorRoomStatusChangeEvents, IESLiveAnchorFansGroupShareProtocol>

@property (retain, nonatomic) HTSLiveToolbarItem *shareItem;
@property (retain, nonatomic) HTSLiveToolbarItem *shareGuideItem;
@property (retain, nonatomic) LOTAnimationView *shareGuideView;
@property (nonatomic) BOOL isShowedTrialLiveDialog;
@property (retain, nonatomic) IESLiveAnchorFansGroupShareIntegration *fansGrouopIntegration;
@property (retain, nonatomic) id<IESLiveShareService> shareConfig;
@property (retain, nonatomic) IESLiveAnchorSharePitayaHandler *pitayaHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)updateRedDot;
- (void)changeRedDotOnToolBar:(BOOL)a0;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)shareCurrentLiveToStoryWithEnterMethod:(id)a0;
- (void)showShareView;
- (void)showGroupItem:(BOOL)a0;
- (void)showClassicShareView;
- (void)showShareViewWithParams:(id)a0;
- (void)didClickShareGuideView:(BOOL)a0;
- (void)stopShareGuideViewAnimation;
- (id)shareContentModelWithModel:(id)a0 isShareFansGrouop:(BOOL)a1;
- (void)setupPitayaHandler;
- (BOOL)isNeedShowTryLiveDialog;
- (void)handleShareItem:(BOOL)a0;
- (void)showTryLiveDialog:(id /* block */)a0;
- (void)openAnchorSharePanel:(BOOL)a0;
- (void)trackShareItemClick;
- (void)trackTryLiveDialog:(BOOL)a0 isSubmit:(BOOL)a1;
- (void)didClickShareItem:(BOOL)a0;
- (long long)shareGuideType;
- (void)hideShareGuideItem;
- (void)requestVisibelApiIfNeed:(id)a0;
- (void)trackShareGuideWithShow:(BOOL)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
