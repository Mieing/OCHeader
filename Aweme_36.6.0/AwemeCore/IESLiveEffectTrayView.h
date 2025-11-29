@class UIView, NSString, IESLiveFlexBackgroundImageView, HTSLiveArtTextLabel, HTSEventContext, NSMutableArray, IESLiveMessageTrayEffectModel, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveEffectTrayView : UIView <CAAnimationDelegate, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) IESLiveFlexBackgroundImageView *backgroundContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *xLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (retain, nonatomic) UIView *comboContainerView;
@property (copy, nonatomic) id /* block */ currentComboCompletion;
@property (retain, nonatomic) IESLiveMessageTrayEffectModel *model;
@property (retain, nonatomic) NSMutableArray *comboInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)tapView:(id)a0;
- (id)commonParamsForTracker;
- (void)trackViewShow;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)handleAssembleBusiness:(id)a0;
- (void)publicScreenComponentProduced;
- (void)configComboLabel;
- (void)startComboIfNeed;
- (void)comboAnimationWithNum:(long long)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)trackViewTap;
- (void)mergeComboInfoWithModel:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)setupViews;

@end
