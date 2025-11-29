@class BDASplashMiniView, BDASplashMiniContext;
@protocol BDASplashMiniDelegate;

@interface BDASplashMiniTask : NSObject

@property (weak, nonatomic) id<BDASplashMiniDelegate> delegate;
@property (retain, nonatomic) BDASplashMiniContext *context;
@property (retain, nonatomic) BDASplashMiniView *splashView;
@property (nonatomic) long long status;

+ (id)createTaskWithContext:(id)a0 delegate:(id)a1;

- (void)loadTask;
- (void)releaseTaskWithScene:(long long)a0;
- (void)p_setStatus:(long long)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
