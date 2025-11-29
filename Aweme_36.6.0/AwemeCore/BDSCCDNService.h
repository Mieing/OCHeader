@interface BDSCCDNService : NSObject

+ (id)urlWithAnimationPath:(id)a0;
+ (void)requestLottieModelWithNamed:(id)a0 completion:(id /* block */)a1;
+ (void)requestLottieImageWithURL:(id)a0 completion:(id /* block */)a1;
+ (id)requestImageWithNamed:(id)a0 completion:(id /* block */)a1;
+ (id)requestResourceWithPath:(id)a0 completion:(id /* block */)a1;
+ (id)urlWithAnimationNamed:(id)a0;
+ (id)lottieBaseURLWithAnimationNamed:(id)a0;
+ (id)urlWithImageNamed:(id)a0;
+ (id)urlWithFilePath:(id)a0;
+ (void)appWillWillResignActive;
+ (void)setup;

@end
