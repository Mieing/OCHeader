@class NSArray, UICollectionView, NSString, AWERecordBeautyVCContext;

@interface AWERecordBeautyContentViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *cellModels;
@property (weak, nonatomic) AWERecordBeautyVCContext *uiContext;
@property (copy, nonatomic) NSString *nodeId;
@property (copy, nonatomic) NSString *contentTitle;
@property (nonatomic) BOOL isAppendStyleNodeBySplitelineNodeStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (void)updateWithContext:(id)a0 nodeId:(id)a1 isAppendStyleNodeBySplitelineNodeStatus:(BOOL)a2;
- (id)initWithContext:(id)a0 nodeId:(id)a1 isAppendStyleNodeBySplitelineNodeStatus:(BOOL)a2;
- (void)setupNav;
- (unsigned long long)contentVcType;
- (void)collectionView:(id)a0 didSelectBeautyCellAtIndexPath:(id)a1 cellModel:(id)a2;
- (void)updateSourceData:(id)a0;
- (void)scrollToSelectedCell:(BOOL)a0;
- (id)initWithContext:(id)a0 nodeId:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupCollectionView;
- (void)updateFrames;

@end
