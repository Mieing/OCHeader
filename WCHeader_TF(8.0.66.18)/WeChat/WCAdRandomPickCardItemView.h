@class UIView, NSString, WCAdRandomPickCardItemInfo, UIImageView, WCAdURLImageView, WCAdRandomPickCardItemsInfo, MMUIButton, UILabel;
@protocol WCAdRandomPickCardItemViewDelegate;

@interface WCAdRandomPickCardItemView : MMUIView <CAAnimationDelegate>

@property (retain, nonatomic) WCAdRandomPickCardItemInfo *itemInfo;
@property (retain, nonatomic) WCAdRandomPickCardItemsInfo *itemsInfo;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *ellipseImage;
@property (retain, nonatomic) WCAdURLImageView *backgroundImageView;
@property (retain, nonatomic) WCAdURLImageView *itemImageView;
@property (retain, nonatomic) UIImageView *haloImage;
@property (retain, nonatomic) UIView *flipContainerView;
@property (retain, nonatomic) UIView *rotateContainerView;
@property (retain, nonatomic) UIView *cardContainerView;
@property (weak, nonatomic) id<WCAdRandomPickCardItemViewDelegate> delegate;
@property (retain, nonatomic) MMUIButton *coverButton;
@property (nonatomic) long long viewStatus;
@property (nonatomic) long long simpleFlipStatus;
@property (nonatomic) long long extAnimationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemInfo:(id)a1 itemsInfo:(id)a2 viewType:(long long)a3 delegate:(id)a4;
- (void)generateSubviews;
- (void)layoutSubviews;
- (BOOL)needToLayoutSubviews;
- (void)resetCardItemView;
- (void)onCoverButtonClicked:(id)a0;
- (BOOL)isCardItemsViewTypeNarrow;
- (void)setItemImageViewForTransitionBeginning:(BOOL)a0;
- (void)updateViewStatus:(long long)a0 animated:(BOOL)a1;
- (void)prepareSubviewsForIntroduce:(BOOL)a0;
- (void)showIntroduceOne:(BOOL)a0;
- (void)showIntroduceTwo:(BOOL)a0;
- (void)prepareSubviewsForSimpleWave:(BOOL)a0;
- (void)showSimpleWave:(BOOL)a0;
- (void)prepareSubviewsForSimpleFlip:(BOOL)a0;
- (void)showSimpleFlip:(BOOL)a0;
- (void)prepareSubviewsForQuickSwitch:(BOOL)a0;
- (void)showQuickSwitch:(BOOL)a0;
- (void)setToStayPut:(BOOL)a0;
- (void)dimCardGently;
- (void)brightCardIntensively;
- (void)updateCardLayerMaskSafely:(id)a0;
- (void)updateExtAnimationsStatus:(long long)a0 animated:(BOOL)a1;
- (void)prepareSubviewsForFillUp:(BOOL)a0;
- (void)showNormalFillUp:(BOOL)a0;
- (void)showQuickFillUp:(BOOL)a0;
- (void)showFillUp:(BOOL)a0 duration:(double)a1;
- (void)scheduleNormalFillUp;
- (void)onCardViewReadyToFillUp;
- (void)onCardViewFillUpAnimationDone;
- (id)generateKeyframeAnimationWithKeyPath:(id)a0 duration:(double)a1 timingFunctions:(id)a2 values:(id)a3 keyTimes:(id)a4;
- (void)addAnimation:(id)a0 toView:(id)a1 withInfo:(id)a2;
- (void)removeAllLayersAnimations;
- (double)fetchContentMaxWidth;
- (struct CGSize { double x0; double x1; })calcBaseContainerSize;
- (struct CGSize { double x0; double x1; })calcContentImageSize;
- (void)updateTitleColorWithStatus:(long long)a0;
- (void)onCardViewQuickSwitchAnimtaionDone;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
