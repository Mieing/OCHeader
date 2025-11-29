@class LOTAnimationView, UIButton;

@interface AWEMusicPlayerCollectionView : UIView

@property (retain, nonatomic) LOTAnimationView *collectAnimationView;
@property (retain, nonatomic) UIButton *collectionButton;

- (void)animeCollectWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setAnimationWithTargetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
