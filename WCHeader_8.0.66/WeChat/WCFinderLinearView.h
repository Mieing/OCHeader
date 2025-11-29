@class UIView;

@interface WCFinderLinearView : UIView

@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL dirty;
@property (nonatomic) BOOL objectReleasing;
@property (weak, nonatomic) WCFinderLinearView *rootLinearView;
@property (weak, nonatomic) WCFinderLinearView *parentLinearView;
@property (weak, nonatomic) UIView *rootYogaView;
@property (nonatomic) BOOL layoutVertical;
@property (nonatomic) double contentPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ onSizeChanged;

+ (id)linearViewBuilder:(id /* block */)a0;
+ (id)verticalLayoutView;
+ (id)horizontalLayoutView;

- (void)addSubHorizontalLayout:(id /* block */)a0;
- (void)addSubVerticalLayout:(id /* block */)a0;
- (id)addSpacer;
- (id)initWithLayoutVertical:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)updateViewsPadding;
- (void)updatePaddingThenSizeToFit;
- (void)doUpdateViewPadding;
- (void)addSubview:(id)a0;
- (void)didMoveToSuperview;
- (void *)observeContext;
- (void)willRemoveSubview:(id)a0;
- (void)addObservers:(id)a0;
- (void)removeObservers:(id)a0;
- (void)onSubviewHiddenChange:(id)a0 object:(id)a1;
- (void)onSublabelTextChange:(id)a0 object:(id)a1;
- (void)onSubImageViewImageChange:(id)a0 object:(id)a1;
- (void)markDirty;
- (void)markYogaDirty;
- (void)delaySizeToFit;
- (void)_delaySizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
