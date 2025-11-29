@class NSString, UICollectionView, UIView, NSIndexPath, UIButton;
@protocol IESLiveBeautyPanelContainerDataSource;

@interface IESLiveBeautyPanelContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegate, IESLiveBeautyHandlerEntryItemDelegate>

@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIView *adjustViewContainer;
@property (retain, nonatomic) UIView *handlerContainer;
@property (retain, nonatomic) UICollectionView *categoryCollectionView;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIView *detailViewContainer;
@property (weak, nonatomic) id<IESLiveBeautyPanelContainerDataSource> dataSource;
@property (retain, nonatomic) NSIndexPath *currentSelectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetButtonTapped;
- (void)setupBackgroundContainer;
- (void)onBeautyPanelShow;
- (void)onBeautyPanelHide;
- (void)reloadWithDataSource:(id)a0;
- (void)enableResetButton:(BOOL)a0;
- (void)reloadDataWithEntryItem:(id)a0;
- (id)entryItemsArray;
- (void)setupDetailViewContainer;
- (void)setupHandlerContainer;
- (void)setupAdjustContainer;
- (void)setDefaultSelectedEntry;
- (id)getItemWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)setupUI;

@end
