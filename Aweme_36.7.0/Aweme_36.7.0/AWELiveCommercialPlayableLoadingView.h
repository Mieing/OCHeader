@class UIImageView, UILabel;

@interface AWELiveCommercialPlayableLoadingView : UIView

@property (retain, nonatomic) UIImageView *playableGameView;
@property (retain, nonatomic) UILabel *playableGameName;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIImageView *playableFlipIconView;
@property (retain, nonatomic) UILabel *tipsLabel;

- (void)handleOrientationChanged:(long long)a0 withCompletion:(id /* block */)a1;
- (void)configPlayableLoadingViewWithAdInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
