@interface BDUGLuckyContainerUICenter : NSObject

@property (retain, nonatomic) Class loadingClass;
@property (retain, nonatomic) Class errorClass;
@property (retain, nonatomic) Class naviClass;

+ (BOOL)needPineappleUIWithQueryItems:(id)a0;
+ (id)sharedInstance;

- (void)configContext:(id)a0 urlString:(id)a1;
- (void)__configLoadingViewContext:(id)a0 urlString:(id)a1;
- (void)__configNavBarContext:(id)a0 urlString:(id)a1;
- (void)__configErrorViewContext:(id)a0 urlString:(id)a1;
- (void)registerLoadingClass:(Class)a0;
- (void)registerErrorClass:(Class)a0;
- (void)registerNaviClass:(Class)a0;
- (void).cxx_destruct;

@end
