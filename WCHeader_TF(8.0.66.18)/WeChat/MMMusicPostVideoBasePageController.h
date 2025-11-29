@class NSString, MMUIActivityIndicatorView, UICollectionView, UIView, WCFinderContact;
@protocol MMMusicPostVideoBasePageDelegate, MMMusicPostVideoTabFinderBaseControllerDataSource;

@interface MMMusicPostVideoBasePageController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderNeayByStreamLayoutDelegate> {
    UIView *_contentView;
    MMUIActivityIndicatorView *_loadingView;
    UICollectionView *_listView;
}

@property (weak, nonatomic) id<MMMusicPostVideoTabFinderBaseControllerDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicPostVideoBasePageDelegate> delegate;
@property (retain, nonatomic) WCFinderContact *contact;
@property (readonly, nonatomic) double minVideoDuration;
@property (nonatomic) BOOL canMultiSelect;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)contentView;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onSwitchToThisPage:(BOOL)a0;
- (void)setLoadingVisible:(BOOL)a0;
- (void)setCurrEposideDuration:(double)a0;
- (void)updateCurrEposideDuration:(double)a0;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (void)updateCanMultiSelect:(BOOL)a0;
- (id)genDefaultCollectionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameInVCIndexPath:(id)a0;
- (struct CGPoint { double x0; double x1; })cellOffsetWithIndexPath:(id)a0;
- (id)cellThumbImage:(id)a0;
- (id)genDefaultFlowLayout;
- (BOOL)isSelectedWithModel:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (unsigned long long)numberOfStreamLayoutSections;
- (unsigned long long)columnCountInStreamLayout:(id)a0 atSection:(unsigned long long)a1;
- (double)columnMarginInStreamLayout:(id)a0 atSection:(unsigned long long)a1;
- (double)rowMarginInStreamLayout:(id)a0 atSection:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetdInStreamLayout:(id)a0 atSection:(unsigned long long)a1;
- (BOOL)isNeedSetupHeaderView:(unsigned long long)a0;
- (BOOL)isNeedSetupFooterView:(unsigned long long)a0;
- (BOOL)isNeedSetupDecorationView:(unsigned long long)a0;
- (double)streamLayoutFooterHeight:(id)a0 atSection:(unsigned long long)a1;
- (double)streamLayoutHeaderHeight:(id)a0 atSection:(unsigned long long)a1;
- (double)streamLayoutHerderTopOffset:(id)a0 atSection:(unsigned long long)a1;
- (double)streamLayout:(id)a0 heightForItemAtIndex:(id)a1 itemWidth:(double)a2;
- (id)dataViewModel;
- (void).cxx_destruct;

@end
