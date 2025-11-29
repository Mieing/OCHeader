@class NSString, UIImageView, UIImage, UITapGestureRecognizer;

@interface AWESearchGaokaoEntryView : UIView <AWESearchGaokaoEntryViewProtocol>

@property (retain, nonatomic) UIImage *expandedImageLight;
@property (retain, nonatomic) UIImage *expandedImageDark;
@property (retain, nonatomic) UIImage *foldedImageLight;
@property (retain, nonatomic) UIImage *foldedImageDark;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long currentTheme;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic, getter=isNonHiddenTranstionAnimating) BOOL nonHiddenTranstionAnimating;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic, getter=isAutoChangeThemeEnabled) BOOL autoChangeThemeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateTheme:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1;
- (void)updateUIWithExpandedImageLight:(id)a0 expandedImageDark:(id)a1 foldedImageLight:(id)a2 foldedImageDark:(id)a3;
- (void)updateUIForState:(unsigned long long)a0 themeStyle:(long long)a1;
- (void)nonAnimateTransitioningToState:(unsigned long long)a0 expandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)animateTransitioningFromState:(unsigned long long)a0 toState:(unsigned long long)a1 expandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 intermediateForExpanded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 intermediateForFolded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 animated:(BOOL)a6 completion:(id /* block */)a7;
- (void)animateFadingOutWithCompletion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForState:(unsigned long long)a0 expandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)animateFadingInToState:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)animateTransitioningFromNonHiddenStateToState:(unsigned long long)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intermediateForExpanded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 intermediateForFolded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;
- (void)transitionToState:(unsigned long long)a0 expandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 intermediateForExpanded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 intermediateForFolded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)tapGestureRecognized:(id)a0;
- (void)updateUI;
- (void)updateUIForState:(unsigned long long)a0;
- (void)setupGestureRecognizers;

@end
