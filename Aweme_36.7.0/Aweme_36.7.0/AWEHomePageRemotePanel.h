@class CAGradientLayer, NSString, UICollectionView, UIView;
@protocol AWEHomePageRemotePanelLifeCycle, UICollectionViewDelegate, UICollectionViewDataSource;

@interface AWEHomePageRemotePanel : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<AWEHomePageRemotePanelLifeCycle, UICollectionViewDelegate, UICollectionViewDataSource> delegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (nonatomic) double contentBottomPadding;
@property (nonatomic) struct CGPoint { double x; double y; } feedButtonAnchorPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldPanelFrame;
@property (nonatomic) struct CGPoint { double x; double y; } animateAnchorPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } panOriginFrame;
@property (nonatomic) long long dismissAnimateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePanelThemeStyle:(long long)a0;
- (void)dismissWithReason:(long long)a0;
- (void)p_didPan:(id)a0;
- (void)loadRemoteUIIfNeed;
- (void)dismissWithReason:(long long)a0 withAnimateType:(long long)a1;
- (void)showPanelOnView:(id)a0 withBottomPadding:(double)a1 withShowAnimateType:(long long)a2 withDismissAnimateType:(long long)a3;
- (long long)homePageRemoteCurrentThemeStyle;
- (double)homePageRemoteModuleWidth;
- (id)initRemotePanelWithDelegate:(id)a0;
- (void)p_showPanelOnView:(id)a0 withBottomPadding:(double)a1 withShowAnimateType:(long long)a2 withDismissAnimateType:(long long)a3;
- (void)p_dismissWithReason:(long long)a0 withAnimateType:(long long)a1 withStartProgress:(double)a2;
- (double)calculateCollectionViewHeight;
- (struct CGPoint { double x0; double x1; })p_getFeedButtonAnchorPoint;
- (void)showPanelWithAnimateType:(long long)a0 withCompletion:(id /* block */)a1;
- (void)dismissPanelWithAnimateType:(long long)a0 withReason:(long long)a1 withStartProgress:(double)a2;
- (double)homePageRemotePanelAnimateTime;
- (void)p_setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissCompletion:(long long)a0;
- (void)resetContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recoverContentViewFrame;
- (void)p_clickMask;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
