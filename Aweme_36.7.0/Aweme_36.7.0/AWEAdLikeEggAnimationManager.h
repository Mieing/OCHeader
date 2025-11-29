@class BDImageView, NSString, AWEAdLottieManager;

@interface AWEAdLikeEggAnimationManager : HTSService <AWEAdLikeEggAnimationManager>

@property (retain, nonatomic) AWEAdLottieManager *lottieManager;
@property (weak, nonatomic) BDImageView *eggImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)typeWithEggModel:(id)a0;
+ (void)downloadEggResourceWithModel:(id)a0;

- (void)resetEggView;
- (void)displayOnView:(id)a0 awemeModel:(id)a1 leftContainer:(id)a2 eggModel:(id)a3 finishBlock:(id /* block */)a4 clickBlock:(id /* block */)a5;
- (void).cxx_destruct;

@end
