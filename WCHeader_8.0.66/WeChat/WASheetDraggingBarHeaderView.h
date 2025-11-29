@class UIView;

@interface WASheetDraggingBarHeaderView : UIView {
    UIView *_bottomView;
    UIView *_arrowView;
    UIView *_maskView;
}

@property (retain, nonatomic) UIView *stickView;
@property (nonatomic) double initialCornerRadius;
@property (nonatomic) double forbidDragUpAnimation;
@property (nonatomic) double initialHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) double currentDragOffsetUpward;
@property (nonatomic) double startDragUpTransitionOffset;
@property (nonatomic) double endDragUpTransitionOffset;
@property (nonatomic) double startDragDownTransitionOffset;
@property (nonatomic) double endDragDownTransitionOffset;
@property (nonatomic) BOOL isExpanded;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTransitionalHidingStickAndExpandProgress:(double)a0;
- (void)setTransitionalExpandStickAndShowDownArrowProgress:(double)a0;
- (void)showStick;
- (void)hideStick;
- (void)addMask;
- (void)removeMask;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;

@end
