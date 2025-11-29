@class UIImageView, UILabel;

@interface IESLiveRecordCountDownView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long currentNum;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (nonatomic) BOOL clearBg;

- (void)reStart;
- (void)refreshLabel;
- (void)animateBegin;
- (id)initWithAnimationCompletion:(id /* block */)a0;
- (id)initWithAnimationCompletion:(id /* block */)a0 clearBackgroundColor:(BOOL)a1;
- (void).cxx_destruct;
- (void)start;
- (void)layoutSubviews;
- (void)dealloc;

@end
