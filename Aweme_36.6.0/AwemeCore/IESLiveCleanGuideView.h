@class UIImageView, LOTAnimationView, UILabel, NSTimer;
@protocol IESLiveWebPPlayer;

@interface IESLiveCleanGuideView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *info;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *anim;
@property (retain, nonatomic) LOTAnimationView *lotAnim;
@property (copy, nonatomic) id /* block */ dismiss;
@property (copy, nonatomic) id /* block */ click;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long guideType;

- (void)stopAnim;
- (void)setupSubviewWithTitle:(id)a0 info:(id)a1;
- (void)setupFullScreenSubviewWithTitle:(id)a0;
- (id)loadWebImageFromTosWithType:(unsigned long long)a0;
- (void)clickAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 info:(id)a2 type:(unsigned long long)a3;
- (void)startWithClickBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
