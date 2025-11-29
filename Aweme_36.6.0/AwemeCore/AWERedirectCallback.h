@class AWERouteTransitionInfo;

@interface AWERedirectCallback : NSObject <AnnieX.AnnieXSLRedirectCallback>

@property (retain, nonatomic) AWERouteTransitionInfo *transitionInfo;

- (void)onFail:(long long)a0 :(id)a1;
- (void).cxx_destruct;
- (void)onSuccess:(id)a0;
- (id)initWithTransitionInfo:(id)a0;

@end
