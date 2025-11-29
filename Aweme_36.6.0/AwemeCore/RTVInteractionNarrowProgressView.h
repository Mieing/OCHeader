@class UIView;

@interface RTVInteractionNarrowProgressView : UIView

@property (readonly, nonatomic) UIView *blurView;
@property (readonly, nonatomic) UIView *progress;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)updateProgress:(double)a0 total:(double)a1;
- (void).cxx_destruct;

@end
