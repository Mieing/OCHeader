@class UIView, NSString, NSArray, UITapGestureRecognizer, MMLiveTaskId, MMLiveEffectsBaseDataItem, CAGradientLayer, UICollectionView, MMUIButton;
@protocol MMLiveBeautyEffectsBaseOperationPanelDelegate, MMLiveBeautyLogicProvider;

@interface MMLiveBeautyEffectsBaseOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, MMFinderLiveDecorationResExt, WCGeneralMonitorDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) UICollectionView *itemsCollectionView;
@property (retain, nonatomic) NSArray *dataItemsList;
@property (retain, nonatomic) id<MMLiveBeautyLogicProvider> beautyLogicProvider;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) MMLiveEffectsBaseDataItem *downloadingItemWaitingForApplyEffect;
@property (weak, nonatomic) id<MMLiveBeautyEffectsBaseOperationPanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (id)getLiveTask;
- (void)updateDataItemsList;
- (void)showPanel;
- (void)didAppear;
- (void)didDisAppear;
- (void)closeAction;
- (void)close:(BOOL)a0;
- (void)closePanelDirectly;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)isInRoom;
- (id)beautyLogic;
- (void)onDecorationMaterialResourceDownloadFinish:(id)a0;
- (void)onDecorationMaterialResourceDownloadFailed:(id)a0;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (id)getDataItemList;
- (BOOL)isEffectIdSelected:(id)a0;
- (void)setEffect:(id)a0;
- (void)reportAction:(unsigned long long)a0 item:(id)a1;
- (void).cxx_destruct;

@end
