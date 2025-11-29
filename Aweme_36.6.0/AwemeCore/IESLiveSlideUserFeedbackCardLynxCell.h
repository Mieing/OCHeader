@class NSString, IESLiveSlideUserFeedbackViewModel, UIView, IESLiveInnerFeedUserFeedbackItemModel;
@protocol IESHYContainerProtocol;

@interface IESLiveSlideUserFeedbackCardLynxCell : UICollectionViewCell <IESHYHybridViewLifecycleProtocol, IESLiveInnerFeedCellProtocol>

@property (retain, nonatomic) IESLiveSlideUserFeedbackViewModel *viewModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *feedGoodContainer;
@property (nonatomic) double enterCardTime;
@property (nonatomic) BOOL isMounted;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESLiveInnerFeedUserFeedbackItemModel *itemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFirstScreen;
- (void)viewDidRecieveError:(id)a0;
- (void)updateWithItemModel:(id)a0;
- (void)didEndDisplayCell;
- (void)renderLynxView:(id)a0 fallbackUrl:(id)a1;
- (void)mountCell;
- (void)unMountCell:(long long)a0;
- (void)didAppearIsDraw:(BOOL)a0 player:(id)a1;
- (void)p_tryToPlayLynxBgMusic;
- (void)updateWithUserFeedbackViewModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didDisappear;
- (void)willDisplayCell;

@end
