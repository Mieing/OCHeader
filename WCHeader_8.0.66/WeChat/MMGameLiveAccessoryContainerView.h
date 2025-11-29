@interface MMGameLiveAccessoryContainerView : MMUIView

@property (nonatomic) struct CGSize { double width; double height; } selfSize;
@property (nonatomic) unsigned long long currControlState;

- (void)layoutSubviews;
- (void)checkSelfSizeChanged;
- (void)delayCheckControlStateChanged;
- (BOOL)checkControlStateChanged;
- (double)scaledPIPMaxWidthPercent;
- (void)reportForControlStateChanged;
- (void)didMoveToWindow;

@end
