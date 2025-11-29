@class LynxUIListContainer;

@interface LynxListContainerView : LynxScrollView

@property (nonatomic) BOOL scrollToLower;
@property (nonatomic) BOOL verticalOrientation;
@property (nonatomic) double scrollEstimatedOffset;
@property (weak, nonatomic) LynxUIListContainer *ui;
@property (nonatomic, getter=isLynxListAdjustingContentOffset, setter=setLynxListAdjustingContentOffset:) BOOL adjustingContentOffsetInternally;

- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)willMoveToWindow:(id)a0;

@end
