@class NSString, NSMutableDictionary, IESLivePSComponentConfigModel, NSTimer, IESLivePublicScreenFixedCardModel, NSMutableArray, IESLivePublicScreenFixedCardContainer;

@interface IESLivePublicScreenFixedCardFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleFixedCardInterface, IESLiveMessageInteractionModuleMessageListAction>

@property (retain, nonatomic) NSMutableDictionary *registeredCardItems;
@property (retain, nonatomic) NSMutableArray *cardModelQueue;
@property (retain, nonatomic) IESLivePublicScreenFixedCardModel *currentCardModel;
@property (retain, nonatomic) IESLivePSComponentConfigModel *curConfigModel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL messageListShown;
@property (nonatomic) BOOL mountFinished;
@property (nonatomic) long long displayedCardCount;
@property (retain, nonatomic) IESLivePublicScreenFixedCardContainer *currentDisplayingCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)showFixedCardView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 forCardItem:(id)a2;
- (void)dismissFixedCardWithName:(id)a0;
- (void)messageListFirstFrameDidShow;
- (BOOL)isExistCurrentCardMode;
- (void)showFixedCardView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 forCardName:(id)a2;
- (void)updateFixedCardSize:(struct CGSize { double x0; double x1; })a0 forCardName:(id)a1;
- (void)registerCard:(id)a0;
- (void)addCardModelToWithCardName:(id)a0 duration:(double)a1 params:(id)a2;
- (void)checkCardQueue:(id)a0;
- (id)cardNameAllowList;
- (id)localCardNameList;
- (void)checkRoomBottomCardInfoForItem:(id)a0;
- (void)currentFixedCardDisplayStateDidChange;
- (void)cardDisplayTimeOut;
- (id)lowPriorityMutexCardNameList;
- (BOOL)cardHasEnqueueWithName:(id)a0;
- (long long)priorityForCardName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
