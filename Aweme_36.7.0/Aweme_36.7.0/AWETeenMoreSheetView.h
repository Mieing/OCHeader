@class UIStackView, AWETeenLongPressTableView, UICollectionView, NSString, AWETeenSpeedPlayView, NSMutableArray, UIView;

@interface AWETeenMoreSheetView : AWETeenBasePanelContainer <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, AWETeenSpeedPlayViewProtocol, AWETeenLongPressPanelDelegate>

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *containerMaskView;
@property (retain, nonatomic) UIView *dragBar;
@property (retain, nonatomic) AWETeenSpeedPlayView *speedPlayContainer;
@property (retain, nonatomic) NSMutableArray *actionArray;
@property (retain, nonatomic) UICollectionView *actionContainer;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) UIStackView *buttonContainer;
@property (nonatomic) double alertViewHeight;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWETeenLongPressTableView *listActionContainer;
@property (nonatomic) BOOL isLeftAlignedStyle;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)breakpointDidUpdate;
- (void)p_setupBind;
- (void)dismissPanel;
- (void)setupActionsWithArray:(id)a0;
- (void)addTopButton:(id)a0;
- (BOOL)p_enableUseNewStylePanel;
- (double)p_calculateActionWidth:(long long)a0;
- (void)playbackRateChange:(double)a0;
- (void)showSpeedPlay;
- (void)p_setupUI;
- (void)dismiss;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)addAction:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)didDismiss;
- (void)dealloc;
- (void)show;
- (void)removeAction:(id)a0;

@end
