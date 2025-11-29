@class UIView;

@interface HTSLiveScorllView : UIView

@property (retain, nonatomic) UIView *frontView;
@property (retain, nonatomic) UIView *backView;
@property (nonatomic) BOOL waitingForLayout;
@property (copy, nonatomic) id /* block */ createViewBlock;
@property (nonatomic) double speed;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) long long scorllViewAlignMode;
@property (nonatomic) BOOL shouldRepeat;

- (void)loadUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)layoutSubviews;
- (id)initWithCreateViewBlock:(id /* block */)a0;
- (void)resetLayout;

@end
