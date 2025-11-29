@class LOTAnimationView, NSString;

@interface AWEAppPlaceholderLoading : UIView <AWEUILoadingViewProtocol>

@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showAppPlaceholderLoadingOnView:(id)a0;
+ (id)showAppPlaceholderLoadingOnView:(id)a0 animated:(BOOL)a1;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;

@end
