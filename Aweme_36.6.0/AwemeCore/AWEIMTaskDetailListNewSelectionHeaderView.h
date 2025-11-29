@class AWEIMTaskDetailistFilterOptionModel, NSArray, UICollectionView, AWEIMWorkSpaceDetailFilterInfoModel, NSString, AWEIMDetailListNewSelectionContext;
@protocol AWEIMTaskDetailListNewSelectionHeaderViewDelegate;

@interface AWEIMTaskDetailListNewSelectionHeaderView : UITableViewHeaderFooterView <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMRendererProtocol>

@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEIMDetailListNewSelectionContext *context;
@property (retain, nonatomic) AWEIMTaskDetailistFilterOptionModel *filterModel;
@property (retain, nonatomic) AWEIMWorkSpaceDetailFilterInfoModel *missionInfo;
@property (weak, nonatomic) id<AWEIMTaskDetailListNewSelectionHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)showSelectPopover:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;
- (void)setupLayout;

@end
