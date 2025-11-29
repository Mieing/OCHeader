@class UIView, NSString, NSArray, UIImageView, UIButton, NSMutableArray, UICollectionView, UILabel;

@interface ACCTemplateSegmentSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *sectionSeparator;
@property (retain, nonatomic) UILabel *bottomHintLabel;
@property (retain, nonatomic) UIView *bottomEditPanel;
@property (retain, nonatomic) UIImageView *replaceImageView;
@property (retain, nonatomic) UIImageView *clipImageView;
@property (nonatomic) double lastCollectionViewInteractiveTime;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) long long currentSelectedIndex;
@property (copy, nonatomic) NSArray *cellModelArray;
@property (retain, nonatomic) NSMutableArray *orderArray;
@property (nonatomic) BOOL isMovingSegment;
@property (copy, nonatomic) NSArray *thumbnailImages;
@property (copy, nonatomic) NSArray *thumbnailTimes;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UICollectionView *videosCollectionView;
@property (nonatomic) BOOL isSelectedByUser;
@property (nonatomic) BOOL isPause;
@property (nonatomic) BOOL isWithoutCursor;
@property (copy, nonatomic) id /* block */ canEditCallback;
@property (copy, nonatomic) id /* block */ canReorderCallback;
@property (copy, nonatomic) id /* block */ selectCallback;
@property (copy, nonatomic) id /* block */ replaceSegmentCallback;
@property (copy, nonatomic) id /* block */ clipSegmentCallback;
@property (copy, nonatomic) id /* block */ reorderCallback;
@property (copy, nonatomic) id /* block */ canApplyReorderBlock;
@property (copy, nonatomic) id /* block */ checkIsGenerating;
@property (copy, nonatomic) id /* block */ saveButtonClick;
@property (copy, nonatomic) id /* block */ cancelButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)currentViewHeight;
+ (struct CGSize { double x0; double x1; })thumbnailPixelSize;
+ (double)defaultHeight;

- (void)buildViews;
- (BOOL)accReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 canMoveToIndexPath:(id)a2;
- (void)accReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 willMoveToIndexPath:(id)a2;
- (BOOL)accReorderableCollectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)accReorderableCollectionView:(id)a0 layout:(id)a1 willBeginDraggingItemAtIndexPath:(id)a2;
- (BOOL)accReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 canApplyMoveToIndexPath:(id)a2;
- (void)accReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 didApplyMoveToIndexPath:(id)a2 apply:(BOOL)a3;
- (BOOL)enableTemplateEditInteractiveSimplify;
- (void)saveButtonAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPlayerPause:(BOOL)a1;
- (void)hideAllSignView;
- (void)updateCursorWithIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateEditPanelWithStatus:(BOOL)a0;
- (void)updateTipsViews;
- (BOOL)checkLastCollectionViewInteractiveTimeDiff;
- (BOOL)canEditWithIndex:(long long)a0;
- (void)updateLastCollectionViewInteractiveTime;
- (BOOL)selectSegmentWithIndex:(long long)a0;
- (BOOL)canReorderSlots;
- (id)generateCustomView:(id)a0 titleText:(id)a1;
- (void)replaceSegmentAction;
- (void)clipSegmentAction;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)cancelButtonAction;

@end
