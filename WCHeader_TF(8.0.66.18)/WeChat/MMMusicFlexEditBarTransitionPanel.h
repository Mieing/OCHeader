@class NSString, UICollectionView, MMUIView, MMMusicVideoTransitionModel, MMUIButton, MMUILabel;
@protocol MMMusicFlexEditBarTransitionPanelDataSource, MMMusicFlexEditBarTransitionPanelDelegate;

@interface MMMusicFlexEditBarTransitionPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) unsigned long long preIndex;
@property (nonatomic) unsigned long long nextIndex;
@property (retain, nonatomic) MMMusicVideoTransitionModel *curTransitionModel;
@property (retain, nonatomic) MMMusicVideoTransitionModel *curTransitionModelHistory;
@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) MMUIView *bottomContainerView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *transitionCollectionView;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) MMUIButton *doneBtn;
@property (retain, nonatomic) MMUIButton *replayBtn;
@property (weak, nonatomic) id<MMMusicFlexEditBarTransitionPanelDelegate> delegate;
@property (weak, nonatomic) id<MMMusicFlexEditBarTransitionPanelDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPreIndex:(unsigned long long)a1 andNextIndex:(unsigned long long)a2;
- (void)internalInit;
- (void)layoutSubviews;
- (void)reloadDataWithPreIndex:(unsigned long long)a0 andNextIndex:(unsigned long long)a1;
- (void)refreshSelectedStatus:(BOOL)a0;
- (void)setReplayBtnHidden:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)transitionModelArr;
- (BOOL)isTransitionSelectedWithTransitionId:(id)a0;
- (void)onClickBlankArea;
- (void)onClickCancelBtn;
- (void)onClickDoneBtn;
- (void)onClickReplayBtn;
- (void).cxx_destruct;

@end
