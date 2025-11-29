@interface AWEPOILoadingDisplayControl : NSObject

@property (copy, nonatomic) id /* block */ displayBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isDisplaying;

- (id)initWithDisplayBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1;
- (void)showAfterDelay:(double)a0;
- (void)p_showImp;
- (void).cxx_destruct;
- (void)show;
- (void)finishLoading;

@end
