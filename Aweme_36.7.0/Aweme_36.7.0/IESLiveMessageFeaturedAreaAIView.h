@class UIStackView, UIView, NSString, UIImageView, UIButton, IESLiveMessageFeaturedOperateCollectionView, IESLiveMessageFeaturedAreaAIViewModel, UILabel;

@interface IESLiveMessageFeaturedAreaAIView : IESLiveMessageFeaturedAreaView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) UIStackView *detailStackView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *operationContainer;
@property (retain, nonatomic) UIView *messageContainer;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) IESLiveMessageFeaturedOperateCollectionView *collectionView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) IESLiveMessageFeaturedAreaAIViewModel *viewModel;
@property (nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) double lastResetTimerTS;
@property (nonatomic) double autoFoldDelayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)refreshView;
- (void)foldView;
- (void)setupTopContainer;
- (void)tapActionButton;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)tapContainer;
- (void)setupOperationContainer;
- (void)setupMessageContainer;
- (void)switchToMessageListView;
- (void)restartTimerForAutoFold;
- (void)updateComponentSize;
- (void)addPublicScreenToContainer;
- (void)messageFeaturedPublicScreenRefresh;
- (void)didClickMessageListContainer;
- (void)updateMessageListHeightWithFontSizeType:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupActionButton;
- (void)setupViews;

@end
