@class NSArray, AWEIMShareLiveMessageCardAnchorViewModel, AWEAwemeModel, UIView, AWEIMShareLiveMessageCardLivingViewModel, NSString;
@protocol AWELiveCommonMessageProtocol, AWELiveStreamPlayer;

@interface AWEIMShareLiveMessageViewModel : AWEIMMessageViewModel <AWEIMShareLiveMessageCardAnchorViewModelDelegate, AWELiveCommonMessageSubscriber, AWELiveStreamShareDelegate, AWEIMLiveTypeMessageViewModelProtocol>

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *coverUrls;
@property (nonatomic) double startLoadingTime;
@property (nonatomic) long long blockedStatus;
@property (nonatomic) double checkLiveUpdatedTime;
@property (retain, nonatomic) AWEIMShareLiveMessageCardAnchorViewModel *anchorViewModel;
@property (retain, nonatomic) AWEIMShareLiveMessageCardLivingViewModel *livingViewModel;
@property (nonatomic) BOOL didTrackedliveShowThisVisibleLifeCycle;
@property (retain, nonatomic) id<AWELiveCommonMessageProtocol> messageManager;
@property (weak, nonatomic) UIView *cardView;
@property (nonatomic) struct CGSize { double width; double height; } playerSize;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) BOOL isWillEnterRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long playStatus;
@property (nonatomic) double displayTime;

- (void)installMessageChannel;
- (void)uninstallMessageChannel;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (id)ecomTrackParamsWithMsg:(id)a0;
- (void)setupWithMessage:(id)a0;
- (BOOL)isAnchrViewModelValid;
- (void)updateAnchrViewModelWithModel:(id)a0;
- (BOOL)checkPlayerControllerExist;
- (void)cleanPlayer;
- (void)checkRoomEndStatus;
- (void)updateWithModel:(id)a0 cardView:(id)a1;
- (void)liveSharecardShowTracker;
- (void)liveSharecardClickTrackerWithFrom:(id)a0 location:(unsigned long long)a1;
- (id)paidStreamTrackParams;
- (void)setNeedsUpdateAhchor;
- (id)ecomTrackClickParamsWithMsg:(id)a0 location:(unsigned long long)a1;
- (void)trackLifeProductLiveMsgWithTapLocation:(unsigned long long)a0;
- (void)__liveShowTracker:(BOOL)a0;
- (BOOL)p_shouldShowPreStream;
- (void)p_updateBlockedStatusIfNeeded;
- (void)realStartPlay;
- (id)shareLiveContentInterface;
- (void)trackLiveWindowDuration;
- (void)setSlm_liveMessageAutoPlayManager:(id)a0;
- (void)trackLiveShowWithEnterMethod:(id)a0 params:(id)a1;
- (void)trackShareCardEventWithName:(id)a0 force:(BOOL)a1;
- (void)trackEcomLiveMsgShow;
- (void)appendBaseParamsToOriginalParams:(id)a0 message:(id)a1;
- (void)openFeedTogether;
- (void)onCommonMessageReceive:(id)a0 messageStr:(id)a1;
- (void)didUpdatedBottomCardModel:(id)a0;
- (BOOL)shouldResponseToMarketingAnchorClick;
- (id)getAnchorViewBenefitSchema;
- (void).cxx_destruct;
- (void)play;
- (void)stop;

@end
