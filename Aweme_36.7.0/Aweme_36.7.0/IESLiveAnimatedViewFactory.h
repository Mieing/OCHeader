@interface IESLiveAnimatedViewFactory : NSObject

+ (id)createLottieViewWithLottieFileName:(id)a0;
+ (id)createAnimatedViewWithWebPName:(id)a0 lottieFileName:(id)a1;
+ (id)createWebPViewWithWebpName:(id)a0;
+ (id)createLottieViewWithLottieFileName:(id)a0 enableCache:(BOOL)a1;

@end
