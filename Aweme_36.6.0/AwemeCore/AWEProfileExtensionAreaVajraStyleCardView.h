@class DUXBadge, AWEProfileExtensionAreaCardModel, UIImageView, NSString, UILabel, UIView, BDImageView;

@interface AWEProfileExtensionAreaVajraStyleCardView : UIView <CAAnimationDelegate, AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaCardViewInternalProtocol>

@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *accessView;
@property (retain, nonatomic) DUXBadge *dotView;
@property (retain, nonatomic) UIImageView *addView;
@property (retain, nonatomic) UIImageView *deleteView;
@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) BDImageView *customImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL hasShownReminderIcon;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) BOOL shouldShrinkTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reloadTitleBlock;
@property (copy, nonatomic) id /* block */ reloadSubTitleBlock;
@property (copy, nonatomic) id /* block */ reloadCustomDetailViewBlock;

- (void)updateSubTitleLabelWithText:(id)a0;
- (unsigned long long)extensionAreaCardType;
- (BOOL)shouldAdaptBigFontMode;
- (void)updateTitleLabelWithText:(id)a0;
- (void)updateImageViewWithLightUrlArray:(id)a0 darkUrlArray:(id)a1;
- (void)updateImageViewWithLightUrlArray:(id)a0 darkUrlArray:(id)a1 completion:(id /* block */)a2;
- (void)updateDotViewState:(BOOL)a0;
- (void)enableAnimateImage:(BOOL)a0 infinityLoop:(BOOL)a1;
- (void)updateAnimateImageWithLastFrame;
- (void)updateSubTitleLabelWithText:(id)a0 subTitleColor:(id)a1;
- (void)updateCustomDetailViewWithView:(id)a0 width:(double)a1;
- (id)getImageView;
- (void)setupSubView;
- (id)createCubicBezierAnimationWith:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)configWithCardModel:(id)a0;
- (id)redDotView;
- (void)configCardStyle:(unsigned long long)a0;
- (void)doDynamicAnimationWithURLList:(id)a0 supplementedText:(id)a1 iconStyle:(unsigned long long)a2 needShowBorder:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)resetCardView;
- (BOOL)isRedDotShow;
- (void)setupAccessView;
- (void)refreshAccessLabel;
- (double)rightEdgeOfRedDot;
- (void)refreshWithEditActionType:(unsigned long long)a0;
- (void)doMallSpecificDynamicAnimationWithSupplementedText:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeCustomView;
- (double)imageScale;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)currentScale;
- (double)fixedWidth;

@end
