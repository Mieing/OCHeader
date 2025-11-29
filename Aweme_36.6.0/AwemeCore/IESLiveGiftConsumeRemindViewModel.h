@class HTSEventContext, NSTimer, NSString, HTSLiveGiftConsumeRemindMessage;
@protocol IESLiveRoomService;

@interface IESLiveGiftConsumeRemindViewModel : NSObject <HTSLiveMessageSubscriber, HTSLiveGiftActions>

@property (nonatomic) BOOL giftPanelShowing;
@property (nonatomic) BOOL isSendingGift;
@property (nonatomic) double delayTime;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveGiftConsumeRemindMessage *remindMessage;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (nonatomic) BOOL enableSaaSReplaceConsumeHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)giftViewWillShow;
- (void)didStartSendGift;
- (void)didSendGiftWithCost:(long long)a0;
- (void)didSendGiftFailed;
- (void)giftViewWillDismiss;
- (void)componentDidMount;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)toolbarItemDidClick;
- (void)toolbarItemDidShow;
- (void)dispatchFakeAssetMsgIfNeed;
- (void)showConsumeRemindIfNeeded;
- (void)didFinishSendGift;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
