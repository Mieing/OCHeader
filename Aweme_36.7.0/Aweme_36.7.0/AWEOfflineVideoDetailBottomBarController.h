@class NSString, UIView;

@interface AWEOfflineVideoDetailBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (Class)contextClass;
- (id)bottomBarView;

@end
