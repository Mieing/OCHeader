@class UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveDiggSpiltAnimationView : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *startAnimationView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *loopAnimationView;

- (id)createAnimationViewWithName:(id)a0 repeat:(BOOL)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;

@end
