@class UIButton, LOTAnimationView, AWECollectionButton;
@protocol AWEPlayInteractionMusicCollectionViewDelegate;

@interface AWEPlayInteractionMusicCollectionView : UIView

@property (retain, nonatomic) UIButton *collectionButton;
@property (retain, nonatomic) UIButton *collectionRedButton;
@property (retain, nonatomic) UIButton *collectedButton;
@property (retain, nonatomic) AWECollectionButton *gotoDSPButton;
@property (retain, nonatomic) LOTAnimationView *collectLottieView;
@property (nonatomic) BOOL animate;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<AWEPlayInteractionMusicCollectionViewDelegate> delegate;

- (void)p_setup;
- (void)p_animateBackToNoCollectState;
- (void)btnCliced:(id)a0;
- (id)initWithState:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;

@end
