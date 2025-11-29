@class UIView;

@interface IESECLiveRotatingView : UIView

@property (retain, nonatomic) UIView *lastView;
@property (retain, nonatomic) UIView *showingView;
@property (retain, nonatomic) UIView *nextView;

- (void)configUI;
- (void)updateCurrentWithUpdateBlock:(id /* block */)a0;
- (void)scrollToNextWithUpdateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCreateViewBlock:(id /* block */)a0;

@end
