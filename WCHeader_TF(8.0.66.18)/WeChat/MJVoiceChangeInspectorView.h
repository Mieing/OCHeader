@class MMUIActivityIndicatorView, UICollectionView, NSString, MMUIButton, MJSegmentInspectorViewModel;
@protocol MJSpeechTextInspectorViewModelProtocol;

@interface MJVoiceChangeInspectorView : MJSegmentInspectorView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MJVoiceChangeCellDelegate>

@property (readonly, nonatomic) MJSegmentInspectorViewModel<MJSpeechTextInspectorViewModelProtocol> *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL shouldBlockWhenLoading;
@property (nonatomic) BOOL shouldRequestVoiceChangeUponLoaded;
@property (nonatomic) BOOL shouldHideTopBar;
@property (retain, nonatomic) MMUIButton *protocolButton;
@property (copy, nonatomic) id /* block */ tapLinkBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 options:(unsigned long long)a1;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)reloadContents;
- (void)loadContents;
- (void)updateViewsForWillLoadContents;
- (void)updateViewsForDidLoadContents:(BOOL)a0;
- (void)requestVoiceChangeForSelectedRole;
- (void)blockUserInteraction;
- (void)unblockUserInteraction;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateCellSelection;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleCollectionView:(id)a0 selectItemAtIndexPath:(id)a1 autoPlay:(BOOL)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)voiceChangeCellDidRequestRetry:(id)a0;
- (void)voiceChangeCellDidSelectDeleteCloneRole:(id)a0;
- (void)protocolButtonButtonDidTouchUpInside:(id)a0;
- (void)showProtocolButton;
- (void)hideProtocolButton;
- (void).cxx_destruct;

@end
