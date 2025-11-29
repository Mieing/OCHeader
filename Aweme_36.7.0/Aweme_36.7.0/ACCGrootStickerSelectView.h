@class NSArray, UICollectionView, NSString, UILabel, UIButton;
@protocol ACCGrootStickerSelectViewDelegate;

@interface ACCGrootStickerSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UITextViewDelegate>

@property (retain, nonatomic) NSArray *grootDetailsModels;
@property (nonatomic) BOOL allowResearch;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long p_currentIndex;
@property (nonatomic) double p_dragStartX;
@property (nonatomic) double p_dragEndX;
@property (weak, nonatomic) id<ACCGrootStickerSelectViewDelegate> delegate;
@property (retain, nonatomic) UILabel *selectTipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *allowResearchButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })adaptionCollectionViewSize;

- (void)didClickCancelButton:(id)a0;
- (void)configData:(id)a0 selectedModel:(id)a1 allowResearch:(BOOL)a2 delegate:(id)a3;
- (void)didClickedSaveButton:(id)a0;
- (void)didClickAllowResearchButton:(id)a0;
- (void)fixCellToCenter:(BOOL)a0;
- (void)updateAllowResearchButton:(BOOL)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
