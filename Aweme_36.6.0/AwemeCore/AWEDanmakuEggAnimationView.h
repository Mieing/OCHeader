@class NSString, IESLiveVideoGiftController;

@interface AWEDanmakuEggAnimationView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (copy, nonatomic) id /* block */ alphaPlayerCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)showEggLottieWithLottiePath:(id)a0 lottieRatio:(double)a1 completion:(id /* block */)a2;
- (void)showAlphaPlayerWithPath:(id)a0 danmakuSceneType:(long long)a1 completion:(id /* block */)a2;
- (void)stopAlphaPlayerIfNeed;
- (void).cxx_destruct;

@end
