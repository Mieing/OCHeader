@class RTVEffectGameListCellModel, NSString, RTVEffectGameListButton, UILabel, UIView, BDImageView;
@protocol RxInjector, RTVEffectGameListCellDelegate;

@interface RTVEffectGameListCell : UICollectionViewCell <RTVCellRenderProcotol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) BDImageView *gameIcon;
@property (readonly, nonatomic) UILabel *gameTitle;
@property (readonly, nonatomic) UILabel *gameSubtitle;
@property (readonly, nonatomic) RTVEffectGameListButton *gameButton;
@property (readonly, nonatomic) UIView *separatorLine;
@property (readonly, nonatomic) RTVEffectGameListCellModel *cellModel;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<RTVEffectGameListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (id)__skeletonColor;
- (double)__gameIconCornerRadius;
- (id)__gameTitleFont;
- (id)__gameTitleTextColor;
- (id)__gameSubtitleTextColor;
- (double)__gameButtonCornerRadius;
- (id)__gameButtonFont;
- (id)__gameButtonBackgroundColorForEnable:(BOOL)a0;
- (void)__buttonTouchUpInside:(id)a0;
- (id)__gameButtonTitleColorForEnable:(BOOL)a0;
- (void)__updateGameTitle:(id)a0;
- (void)__updateGameSubtitle:(id)a0;
- (void)__updateGameIcon:(id)a0;
- (void)__updateGameButtonWithModel:(id)a0;
- (void)__updateUIWithModel:(id)a0;
- (id)renderModel:(id)a0 context:(id)a1 forIndexPath:(id)a2 inCollectionView:(id)a3;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
