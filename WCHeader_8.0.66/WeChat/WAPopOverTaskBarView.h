@class NSString, UICollectionView, MMUIViewController, WAPopOverTaskBarlogic, UIView;
@protocol WAPopOverTaskBarViewDelegate;

@interface WAPopOverTaskBarView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *taskCollectionView;
@property (retain, nonatomic) WAPopOverTaskBarlogic *taskBarLogic;
@property (weak, nonatomic) id<WAPopOverTaskBarViewDelegate> taskBarViewDelegate;
@property (nonatomic) BOOL isNeedBackToChatButton;
@property (weak, nonatomic) MMUIViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPopOverTaskBarLogic:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)moveToLeftMostTaskItem;
- (void)layoutSubviews;
- (void)initView;
- (void)initContentView;
- (void)initTaskCollectionView;
- (void)reloadData;
- (void)layoutContentView;
- (void)layoutTaskCollectionView;
- (double)calCollectionViewHeight;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)taskItemAtRowIndex:(long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)onMainFrameTaskItemUpdated;
- (void).cxx_destruct;

@end
