@class UILongPressGestureRecognizer, UILabel, NSIndexPath, UIView;
@protocol CachalotComponent;

@interface CachalotCommonCollectionViewCell : UICollectionViewCell {
    UILabel *_debugLabel;
    UILongPressGestureRecognizer *_debugPressGesture;
}

@property (retain, nonatomic) id<CachalotComponent> attachedComponentView;
@property (weak, nonatomic) UIView *attachingView;
@property (nonatomic) BOOL debugUIMode;
@property (retain, nonatomic) NSIndexPath *debugIndexPath;
@property (nonatomic) unsigned long long renderFlag;
@property (copy, nonatomic) id /* block */ debugPressBlock;

+ (id)commonIdentifier;

- (void)p_debug_updateLabel;
- (id)debug_renderDescriptionWithFlag:(unsigned long long)a0;
- (void)updateDebugUIMode:(BOOL)a0;
- (id)debug_selfColor;
- (void)debug_longPress:(id)a0;
- (void)attachComponentView:(id)a0;
- (void)updateLayoutToComponentView;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
