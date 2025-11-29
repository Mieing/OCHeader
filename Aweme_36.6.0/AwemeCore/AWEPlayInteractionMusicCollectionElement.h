@class NSString, AWEPlayInteractionMusicCollectionView;

@interface AWEPlayInteractionMusicCollectionElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionMusicCollectionViewDelegate, AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEPlayInteractionMusicCollectionView *collectionView;
@property (copy, nonatomic) id /* block */ workItem;
@property (nonatomic) long long avoidPriority;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (BOOL)isNeedDelayAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)cancelWorkItem;
- (void)p_collectionStatusChangedNoti:(id)a0;
- (BOOL)shouldShowCollectionGuide;
- (void)updateCollectionViewAppear:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldShowMusicCollectionButton;
- (void)playInteractionMusicCollectionViewDidTapCollection:(id)a0;
- (void)playInteractionMusicCollectionViewDidTapGoToDSP:(id)a0;
- (void)playInteractionMusicCollectionView:(id)a0 stateChanged:(long long)a1;
- (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)elementHeight;

@end
