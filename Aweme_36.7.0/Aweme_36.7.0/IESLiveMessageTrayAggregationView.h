@class UIView, NSString, HTSEventContext, HTSLiveArtTextLabel, HTSLiveMatchHotMessage, IESLiveCountTimer, IESLiveMessageTrayAggregationModel, IESLiveAnimatedImageView, IESLiveImageView, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveMessageTrayAggregationView : UIView <CAAnimationDelegate, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedIconBg;
@property (retain, nonatomic) IESLiveImageView *trayView;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *comboView;
@property (retain, nonatomic) HTSLiveArtTextLabel *xLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (copy, nonatomic) id /* block */ currentComboCompletion;
@property (retain, nonatomic) HTSLiveMatchHotMessage *currentMessage;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (retain, nonatomic) IESLiveMessageTrayAggregationModel *model;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL enablePSComponentForMesssageTray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (void)trackOnShow:(id)a0;
- (id)aggregationIcon;
- (void)updateWithModels;
- (void)startEnterAnimation;
- (void)comboScaleAnimationWithNum:(unsigned long long)a0;
- (void)checkIfNeedDisappearImmediately;
- (void)trackOnDismiss;
- (void)startTrayScaleAnimation;
- (void)disappearImmediately;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setupViews;

@end
