@class FinderLivePromoteMsgInfo, MMFinderLiveProductPromotePubbleContentView, MMFinderLiveBulkBuyPromotePubbleContentView, FinderShopCouponInfo, MMFinderLiveTaskId, MMFinderLiveGoodsItem, MMFinderLivePromotePubbleContentView, MMUIButton, MMFinderLiveAdsItem;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLivePromotePubbleContainerView : MMRectTriangleArrowView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) FinderLivePromoteMsgInfo *promoteMsgInfo;
@property (nonatomic) long long style;
@property (nonatomic) BOOL shouldHidden;
@property (readonly, nonatomic) MMFinderLiveProductPromotePubbleContentView *productContentView;
@property (readonly, nonatomic) MMFinderLiveBulkBuyPromotePubbleContentView *bulkBuyContentView;
@property (retain, nonatomic) MMFinderLivePromotePubbleContentView *contentView;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (copy, nonatomic) id /* block */ tapCallback;
@property (copy, nonatomic) id /* block */ shouldHiddenChangeCallback;
@property (weak, nonatomic) id<MMFinderLiveOperationViewDelegate> operationDelegate;
@property (readonly, nonatomic) id currentPromoteItem;
@property (readonly, nonatomic) MMFinderLiveGoodsItem *currentDisplayGoodsItem;
@property (readonly, nonatomic) MMFinderLiveAdsItem *currentDisplayAdsItem;
@property (readonly, nonatomic) FinderShopCouponInfo *currentDisplayCouponInfo;
@property (readonly, nonatomic) BOOL isCustomDisplaying;
@property (copy, nonatomic) id /* block */ actionReportCallback;
@property (nonatomic) BOOL hideCloseButton;

+ (id)createPromotePubbleContainerWithPromoteMsgInfo:(id)a0 taskId:(id)a1;
+ (double)getContainerHeight:(long long)a0 displayTriTip:(BOOL)a1;
+ (double)getContentHeight:(long long)a0;
+ (double)getContentWidth:(id)a0 taskId:(id)a1;
+ (double)getContainerWidth:(id)a0 taskId:(id)a1;
+ (id)currentLiveTask;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 promoteMsgInfo:(id)a2 taskId:(id)a3 style:(long long)a4;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutCloseButton;
- (void)closeButtonAddBackGroundImage;
- (void)updateCloseButtonPosition;
- (BOOL)isFromAnchorPromote;
- (double)selfCornerRadius;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (void)onShowed;
- (void)onDismissed;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)showWithAnimationFromPosition:(struct CGPoint { double x0; double x1; })a0 toPosition:(struct CGPoint { double x0; double x1; })a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateCloseButtonForScale:(double)a0;
- (void)showWithAnimationToBottom:(double)a0 horizontalExtendCenter:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)showWithAnimationToBottom:(double)a0 middleScale:(double)a1 middleCenterY:(double)a2 xAnchor:(double)a3 xAnchorPart1Position:(double)a4 part1Duration:(double)a5 part2Duration:(double)a6 part2Animating:(id /* block */)a7 completion:(id /* block */)a8;
- (void)dismissWithAnimationFromPosition:(struct CGPoint { double x0; double x1; })a0 toPosition:(struct CGPoint { double x0; double x1; })a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithAnimationToBottom:(double)a0 horizontalExtendCenter:(double)a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithAnimationToMiddleCenterY:(double)a0 centerY:(double)a1 middleScale:(double)a2 xAnchor:(double)a3 xAnchorPart2Position:(double)a4 part1Duration:(double)a5 part2Duration:(double)a6 part1Animating:(id /* block */)a7 completion:(id /* block */)a8;
- (void)setAlpha:(double)a0;
- (void)onCloseAction;
- (BOOL)isCurrentPromoteMsgInfo:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteMsgInfo:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)displayContent:(unsigned long long)a0;
- (void)updateShouldHidden:(BOOL)a0;
- (id)currentLiveTask;
- (void)setHidden:(BOOL)a0;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
