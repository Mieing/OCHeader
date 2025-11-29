@class IESLiveAnimatedImageView;

@interface IESLiveRevenueInteractPlayComponentBreakthroughStageAnimation : IESLiveRevenueInteractPlayComponent

@property (retain, nonatomic) IESLiveAnimatedImageView *stageAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *atmosphereAnimationView;
@property (nonatomic) unsigned long long currentStage;
@property (nonatomic) long long ownerScore;
@property (nonatomic) BOOL isSetup;

- (void)componentDidLoad;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentDidUpdateBattleView;
- (BOOL)isSceneGiftPK;
- (void)playStageAnimationWithUrl:(id)a0 offsetY:(double)a1;
- (void)playStageAtmosphereAnimationWithUrl:(id)a0;
- (void)playEndAnimationWithInfo:(id)a0;
- (void)onReceivedLinkmicMethodMessage:(id)a0;
- (void)playAtmosphereAnimationWithUrl:(id)a0 enhance:(BOOL)a1;
- (void)clearStageAnimationView;
- (void)clearAtmosphereAnimationView;
- (void)trackFinishLevel;
- (void).cxx_destruct;
- (void)clear;
- (void)setup;

@end
