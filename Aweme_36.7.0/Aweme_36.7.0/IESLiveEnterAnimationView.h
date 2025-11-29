@class UIImageView, IESLiveEnterAnimationViewModel;

@interface IESLiveEnterAnimationView : UIView

@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) IESLiveEnterAnimationViewModel *model;

- (void)showEnterAnimWithModel:(id)a0 complete:(id /* block */)a1;
- (void)dismissWithComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
