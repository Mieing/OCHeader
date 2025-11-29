@class CALayer, HTSLiveLikeEggSyncData, IESLivePSComponentConfigModel, HTSEventContext, IESLiveAnimatedImageView, HTSLiveAmazingBackgroundView, UILabel;

@interface IESLiveMessageTrayLikeEggView : UIView <IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bgGradientView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *progressView;
@property (retain, nonatomic) IESLiveAnimatedImageView *prepareIcon;
@property (retain, nonatomic) IESLiveAnimatedImageView *changeIcon;
@property (retain, nonatomic) IESLiveAnimatedImageView *activeIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) CALayer *effectBgMaskLayer;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *borderLayer;
@property (retain, nonatomic) HTSLiveLikeEggSyncData *message;
@property (nonatomic) BOOL didDisappear;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (void)trackOnShow:(id)a0;
- (void)executeDisAppear:(id /* block */)a0 completion:(id /* block */)a1;
- (void)afterShowing;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
