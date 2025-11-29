@class IESLiveAnchorPFListItem, IESLiveCountTimer, IESLiveAnchorSoundCardView, IESLiveAnchorSoundCardModel, NSString;

@interface IESLiveAnchorSoundCardFragment : IESLiveRoomComponent <IESLiveAnchorRoomStatusChangeEvents, IESLiveAnchorPFListObserver>

@property (nonatomic) BOOL hasStartLive;
@property (nonatomic) BOOL isSoundCardModeEnable;
@property (nonatomic) BOOL soundCardStatus;
@property (nonatomic) BOOL hasSendSoundCardPush;
@property (retain, nonatomic) IESLiveCountTimer *soundCardTimer;
@property (nonatomic) double startPushTime;
@property (retain, nonatomic) IESLiveAnchorPFListItem *soundCardItem;
@property (retain, nonatomic) IESLiveAnchorSoundCardView *soundCardView;
@property (retain, nonatomic) IESLiveAnchorSoundCardModel *soundCardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)bindAction;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)willStopAnchorLive;
- (void)pfListViewDidAppear;
- (void)pfListViewDidDisAppear;
- (id)pfListService;
- (void)setupSoundCardModel;
- (void)setupSoundCardItem;
- (void)cleanSoundCardTimer;
- (void)observerAudioDevice;
- (void)openSoundCard;
- (void)closeSoundCard;
- (void)trackSoundCardButtonStatus:(BOOL)a0 isClick:(BOOL)a1;
- (void)cleanSoundCardView;
- (void)addSoundCardItem;
- (void)removeSoundCardItem;
- (void)updateSoundCardViewIfNeeded;
- (void)setupSoundCardView;
- (void)updateSoundCardView;
- (void)handleSoundCard:(BOOL)a0 fromPage:(long long)a1;
- (BOOL)isHeadphonesPluggedIn:(id)a0;
- (void)showSoundCardPush;
- (void)handleAudioSessionChanged:(id)a0;
- (void)trackSoundCardOpen:(BOOL)a0 fromPage:(id)a1;
- (void)trackSoundCardPushViewShow;
- (void).cxx_destruct;

@end
