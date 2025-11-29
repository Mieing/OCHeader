@interface IESLiveRecordWidget : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playgroundAreaRect;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isInLeft;
@property (nonatomic) BOOL isFixed;

- (void)updateTime:(double)a0;
- (void)widgetDidTapped;
- (void)widgetShouldRestrain;
- (void)playAppearAnimation:(BOOL)a0;
- (void)onPan:(id)a0;
- (void)widgetSetToArea:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)onTap:(id)a0;

@end
