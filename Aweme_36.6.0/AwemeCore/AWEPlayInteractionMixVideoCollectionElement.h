@class NSString, AWEPlayInteractionMixVideoCollectionView;
@protocol AWEFeedMixCollectionGuideManagerProtocol;

@interface AWEPlayInteractionMixVideoCollectionElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionMixVideoCollectionViewDelegate, AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEPlayInteractionMixVideoCollectionView *collectionView;
@property (retain, nonatomic) id<AWEFeedMixCollectionGuideManagerProtocol> feedMixCollectionGuideManager;
@property (copy, nonatomic) id /* block */ workItem;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)activateInfoWithData:(id)a0;
- (void)trackShow;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)requestUnCollected;
- (void)requestCollected;
- (void)postNotificationWithType:(unsigned long long)a0;
- (void)collectionStatusChangedNoti:(id)a0;
- (void)trackClickCollectEventWith:(BOOL)a0;
- (void)showBottomNoti;
- (void)collectionAction;
- (void)cancelWorkItem;
- (void)trackCollectionAction;
- (BOOL)shouldShowMixVideoCollectionButton;
- (void)playInteractionMixVideoCollectionViewDidTapCollection:(id)a0;
- (void)playInteractionMixVideoCollectionView:(id)a0 stateChanged:(long long)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
