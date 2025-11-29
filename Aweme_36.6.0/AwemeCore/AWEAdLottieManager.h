@class NSString, LOTAnimationView, AWEAwemeModel, NSDate, UIButton;

@interface AWEAdLottieManager : NSObject

@property (retain, nonatomic) NSDate *lastPlayTime;
@property (weak, nonatomic) LOTAnimationView *lottieView;
@property (weak, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) NSString *laysWebUrl;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (void)downloadLottieWithURL:(id)a0 completion:(id /* block */)a1;
+ (id)getLottieWithURL:(id)a0;
+ (id)findLottieJSONPath:(id)a0;
+ (void)removeLottieWithURL:(id)a0;

- (void)displayOnView:(id)a0 awemeModel:(id)a1 leftContainer:(id)a2 eggModel:(id)a3 finishBlock:(id /* block */)a4 clickBlock:(id /* block */)a5;
- (void)resetLottieView;
- (void)displayLaysEggOnView:(id)a0 leftContainer:(id)a1 eggModel:(id)a2 finishBlock:(id /* block */)a3 clickBlock:(id /* block */)a4;
- (void)displayOnView:(id)a0 sourceURL:(id)a1 finishBlock:(id /* block */)a2;
- (void)clickButtonDidClicked:(id)a0;
- (void).cxx_destruct;

@end
