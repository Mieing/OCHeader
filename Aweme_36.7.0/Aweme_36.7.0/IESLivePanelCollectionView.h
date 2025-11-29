@class IESLiveToolbarTracker, HTSEventContext, NSArray, UIView, NSString, IESLiveGuardCollectionView, NSMutableArray, IESLivePanelConfiguration;

@interface IESLivePanelCollectionView : UIView <IESLivePanelViewRouter, IESLiveAutoRotateAction, HorizontalScrollCollectionViewCellDelegate, IESLiveSplitScreenAction, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) IESLiveGuardCollectionView *collectionView;
@property (retain, nonatomic) IESLivePanelConfiguration *panelConfig;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) UIView *exclutionsMask;
@property (retain, nonatomic) UIView *blurView;
@property (nonatomic) BOOL needAverage;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveToolbarTracker *tracker;
@property (copy, nonatomic) id /* block */ onDisplayCallback;
@property (retain, nonatomic) NSMutableArray *cachedAnimationArr;
@property (nonatomic) BOOL isAnchorNewStyle;
@property (nonatomic) BOOL isAudienceNewStyle;
@property (copy, nonatomic) NSArray *titles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (BOOL)isNewStyle;
- (void)updatePanelHeight:(double)a0;
- (void)splitScreenBreakPointUpdate;
- (void)dismissPanelView:(id /* block */)a0;
- (void)showAnimationWithItems:(id)a0 andGroupTitle:(id)a1;
- (void)refreshPanelFrame;
- (void)highlightGuide;
- (void)didTapItemAtIndexPath:(id)a0;
- (void)logEvent:(id)a0 fileName:(const char *)a1 functionName:(const char *)a2 line:(int)a3 extra:(id)a4;
- (BOOL)sectionCanHorizentalScroll:(long long)a0;
- (struct CGSize { double x0; double x1; })referenceSizeForKind:(id)a0 inSection:(long long)a1;
- (void)cellClick:(id)a0;
- (void)dismissPanelView;
- (id)exclustionsMaskView;
- (void)cleanMask;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)reloadWithItems:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
