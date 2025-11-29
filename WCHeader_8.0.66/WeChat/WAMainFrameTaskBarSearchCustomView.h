@class UIButton;
@protocol WAMainFrameTaskBarSearchCustomViewDelegate;

@interface WAMainFrameTaskBarSearchCustomView : MMBarItemCustomView

@property (retain, nonatomic) UIButton *innerButton;
@property (weak, nonatomic) id<WAMainFrameTaskBarSearchCustomViewDelegate> taskBarViewDelegate;

- (id)init;
- (void)setupSubviews;
- (void)updateInnerButtonWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)onClickSearch;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
