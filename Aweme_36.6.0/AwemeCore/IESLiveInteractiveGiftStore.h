@class HTSLiveToolbarItem, NSDictionary, NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractiveGiftStore : IESLiveInteractiveGiftBaseStore <HTSLiveMessageSubscriber, UIGestureRecognizerDelegate>

@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) id<IESLiveRoomService> mixRoom;
@property (nonatomic) long long acceptCount;
@property (retain, nonatomic) NSDictionary *interactGiftMessageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)baseTrackParams;
- (void)componentDidMount;
- (BOOL)isInLive;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)showGiftPanelWithExtra:(id)a0;
- (void)p_showGiftPanel;
- (void)closeGiftPanelForce;
- (void)selectGiftWithId:(long long)a0;
- (void)pinModeChange;
- (void)trackForGiftToolBarItemClick;
- (void)trackForGiftToolBarItemShow;
- (void)trackForMessageClickWithGiftId:(long long)a0;
- (BOOL)shouldShowMessage;
- (void)mockNoticeEffectMsgWithGift:(id)a0;
- (long long)aggregateShowTimes;
- (void)saveAggregateShowTimes:(long long)a0;
- (void)trackForMessageShowWithGiftId:(long long)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
