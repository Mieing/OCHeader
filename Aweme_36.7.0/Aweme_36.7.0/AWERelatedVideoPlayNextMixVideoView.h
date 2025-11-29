@class UIImageView, NSTimer, UILabel, UIView, UIButton;

@interface AWERelatedVideoPlayNextMixVideoView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *mixImageView;
@property (retain, nonatomic) UILabel *remindLabel;
@property (retain, nonatomic) UIButton *cancleButton;
@property (retain, nonatomic) UIView *splitLine;
@property (nonatomic) double countdown;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ completion;

- (void)prepareToShowRemindTips:(BOOL)a0;
- (void)__updateRemindLabel;
- (void)dismissRemindLabel;
- (void)isShowMixImage:(BOOL)a0;
- (void)__clickCancleButton;
- (void)showRemindView:(long long)a0 withCompletion:(id /* block */)a1;
- (void)showRemindViewWithText:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)showRemindViewWithText:(id)a0 duration:(double)a1 buttonTitle:(id)a2 isShowMixImage:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;

@end
