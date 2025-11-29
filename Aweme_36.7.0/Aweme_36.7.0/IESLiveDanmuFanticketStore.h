@class NSString, NSTimer, NSArray, HTSLiveUpdateGameScoreMessage;

@interface IESLiveDanmuFanticketStore : IESLiveBaseFanTicketStore <IESLiveBaseFanTicketStore, HTSLiveMessageSubscriber, IESLiveInteractXplayLifeCircleActions>

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) HTSLiveUpdateGameScoreMessage *cacheMessage;
@property (retain, nonatomic) HTSLiveUpdateGameScoreMessage *lastMessage;
@property (copy, nonatomic) NSArray *guestList;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)a0;
- (void)didStartInteractDanmuGame:(id)a0 isFromSwitchGame:(BOOL)a1;
- (void)didStopInteractDanmuGame:(id)a0;
- (void)updateDanmuScore:(id)a0;
- (void)clearScore;
- (void)removeDanmuScore:(id)a0;
- (void)clearTimer;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
