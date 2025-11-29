@class CAGradientLayer, MMAssetPickerSliderThumbView, NSDate, MMUILabel;
@protocol MMAssetPickerSliderDelegate;

@interface MMAssetPickerSlider : MMUIView

@property (nonatomic) BOOL isActive;
@property (nonatomic) double beginDragValue;
@property (retain, nonatomic) MMAssetPickerSliderThumbView *thumbView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } thumbViewEdgeInset;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (nonatomic) BOOL isAssetPickerDragging;
@property (retain, nonatomic) NSDate *lastDate;
@property (nonatomic) BOOL isThumbViewDragging;
@property (nonatomic) BOOL isThumbViewAnimating;
@property (nonatomic) BOOL isHiddenSliderTopMask;
@property (nonatomic) double value;
@property (weak, nonatomic) id<MMAssetPickerSliderDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 thumbViewEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 thumbViewEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 hiddenSliderTopMask:(BOOL)a2;
- (void)updateThumbViewEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)onAssetPickerDidScroll:(id)a0;
- (void)onAssetPickerWillBeginDragging:(id)a0;
- (void)onAssetPickerDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onInsertSelectedInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)updateTimeLabelText:(id)a0;
- (void)initView;
- (void)initThumbView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbViewFrame:(BOOL)a0 value:(double)a1;
- (void)initTimeLabel;
- (void)initBackgroundLayer;
- (double)maxThumbViewMoveDistanceWithThumbViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)performThumbViewActiveAnimationWithCompletion:(id /* block */)a0;
- (void)performThumbViewNormalAnimationWithCompletion:(id /* block */)a0;
- (void)performThumbViewShowAnimation;
- (void)performThumbViewHiddenAnimation;
- (void)performTimeLabelShowAnimation;
- (void)performTimeLabelHiddenAnimation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onThumbViewDragging:(id)a0;
- (void)onActiveDurationTimeUp;
- (void)layoutSubviews;
- (void)updateThumbViewFrame;
- (void)updateTimeLabelFrame;
- (void).cxx_destruct;

@end
