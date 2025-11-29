@class CameraScanCombineCropImageView, MMTimer, CameraScanCombineGoodsListView, NSString, UIView, CameraScanBlurEffectView;
@protocol CameraScanCombineContentViewDelegate, CameraScanGoodsMarkDotViewInterface;

@interface CameraScanCombineContentView : MMUIView <CameraScanCombineGoodsListViewDelegate>

@property (retain, nonatomic) CameraScanCombineCropImageView *goodsCropImageBorderView;
@property (retain, nonatomic) MMTimer *timerForUITest;
@property (retain, nonatomic) CameraScanCombineGoodsListView *listView;
@property (retain, nonatomic) UIView *centerMaskView;
@property (weak, nonatomic) id<CameraScanCombineContentViewDelegate> delegate;
@property (retain, nonatomic) CameraScanBlurEffectView *blurView;
@property (retain, nonatomic) UIView *contentMaskView;
@property (readonly, nonatomic) BOOL isAppendItemAnimating;
@property (retain, nonatomic) UIView<CameraScanGoodsMarkDotViewInterface> *markDotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setupGoodsCropImageView;
- (void)setupListView;
- (void)setupBlurView;
- (void)setupMaskView;
- (void)setupMarkdotView;
- (void)setupCenterMaskView;
- (void)startMarkingAnimation:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)stopMarkingAnimation;
- (void)layoutSubviews;
- (void)addItemFromDetectors:(id)a0;
- (void)onDetectScanGoodItemFail:(id)a0;
- (void)clearListView;
- (void)contentViewDisappear;
- (id)itemsNeedRetrack;
- (void)onClickHoleMaskView;
- (void)onClikcItemCardWithItemViewModel:(id)a0 index:(unsigned long long)a1;
- (void)onCompleteAppendAnimationWithCardItem:(id)a0;
- (void)callAppendNewCardItemToList:(id)a0;
- (double)gradienLayerMaskHeight;
- (void)listViewWillFold:(BOOL)a0;
- (void)listViewDidFold:(BOOL)a0;
- (void)onListViewWillStartDragging;
- (void)onListViewWillEndDragging;
- (void)onExposeWithItem:(id)a0 hasTitle:(BOOL)a1;
- (BOOL)shouldShowInfoLabel;
- (unsigned long long)listItemCardCount;
- (long long)indexOfItemInList:(id)a0;
- (void)makeDetectSuccessEffect;
- (double)listViewHeight;
- (BOOL)isListViewFold;
- (void).cxx_destruct;

@end
