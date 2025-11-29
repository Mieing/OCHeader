@class NSString, NSDictionary, AWEPlayInteractionPlayletCollectionView, DUXBottomNotification;

@interface AWEPlayInteractionPlayletCollectionElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionPlayletCollectionViewDelegate, AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEPlayInteractionPlayletCollectionView *collectionView;
@property (copy, nonatomic) id /* block */ workItem;
@property (copy, nonatomic) NSDictionary *playletCollectionStrategy;
@property (weak, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isPageDisappear;
@property (nonatomic) BOOL enableShowCollectionButton;
@property (nonatomic) BOOL disableRecordForTransition;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (void)viewController_viewWillDisappear;
- (void)setAppear:(BOOL)a0;
- (id)activateInfoWithData:(id)a0;
- (void)trackShow;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)requestCollected;
- (void)postNotificationWithType:(unsigned long long)a0;
- (void)collectionStatusChangedNoti:(id)a0;
- (void)showBottomNoti;
- (void)collectionAction;
- (void)cancelWorkItem;
- (void)trackCollectionAction;
- (BOOL)shouldShowPlayletCollectionButton;
- (BOOL)shouldShowAtPlayTime;
- (void)showPlayletCollectionButton;
- (void)syncStateIfNeed;
- (void)caculateCollectionButtonState:(id)a0;
- (void)trackClickCollectEvent;
- (void)updateElementState;
- (BOOL)shouldShowButtonForPlaylet:(id)a0;
- (BOOL)hasShowAboveTimes:(id)a0;
- (BOOL)hasCollectionPlaylet:(id)a0;
- (void)playInteractionPlayletCollectionViewDidTapCollection:(id)a0;
- (void)playInteractionPlayletCollectionView:(id)a0 stateChanged:(long long)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
