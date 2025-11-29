@class NSString, StickerBattleInfo, UIView, IESLiveGameInteractStickerBattleInfoEquipListView, IESLiveGameInteractStickerBattleEconomyInfoView;

@interface IESLiveGameInteractStickerBattleInfoRollingView : UIView <CAAnimationDelegate>

@property (nonatomic) double scaleRatio;
@property (nonatomic) long long gameEquipInterval;
@property (nonatomic) long long gameMoneyInterval;
@property (retain, nonatomic) StickerBattleInfo *battleInfo;
@property (retain, nonatomic) IESLiveGameInteractStickerBattleInfoEquipListView *equipDisplayView;
@property (retain, nonatomic) IESLiveGameInteractStickerBattleEconomyInfoView *economyDisplayView;
@property (weak, nonatomic) UIView *showingView;
@property (nonatomic) BOOL rolling;
@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRolling:(double)a0;
- (void)pauseRolling;
- (void)createEconomyDisplayView;
- (void)resumeRolling;
- (void)resetRolling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 battleInfo:(id)a1 gameEquipInterval:(long long)a2 gameMoneyInterval:(long long)a3;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)didMoveToWindow;

@end
