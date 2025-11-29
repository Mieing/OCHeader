@class UIView;

@interface IESLivePlayerSimpleProgressView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *progressView;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithProgress:(double)a0;
- (void)setUpView;

@end
