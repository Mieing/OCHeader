@class UIStackView, NSDictionary, YataContainerViewSource, UIView, UICollectionView;
@protocol YataInstanceInnerInterface;

@interface YataPopupView : UIView

@property (retain, nonatomic) YataContainerViewSource *viewSource;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (copy, nonatomic) NSDictionary *popupConfig;
@property (retain, nonatomic) UIView *safeAreaDummyView;
@property (copy, nonatomic) id /* block */ showAnimationCompletion;
@property (retain, nonatomic) UIStackView *headerView;
@property (retain, nonatomic) UIStackView *footerView;
@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewInitialFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFinalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewMaxLimitFrame;
@property (nonatomic) BOOL autoFitContent;
@property (weak, nonatomic) UIView *coverView;

- (void)setupContainer;
- (void)showAnimationWithCompletion:(id /* block */)a0;
- (id)initWithYataInstance:(id)a0 popupFields:(id)a1;
- (void)showAnimationIfNeededWithCompletion:(id /* block */)a0;
- (void)disableSafeAreaLayout;
- (void)hideAnimationWithCompletion:(id /* block */)a0;
- (void)updateWithRenderNodeArray:(id)a0;
- (void)setupViewSource;
- (void)showAnimationInFitContentMode:(id)a0;
- (id)popHeaderView;
- (id)popFooterView;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setupUI;

@end
