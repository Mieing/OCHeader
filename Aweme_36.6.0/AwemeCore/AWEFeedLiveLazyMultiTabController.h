@class NSDictionary, UIViewController, NSString;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedLiveLazyMultiTabController : UIViewController <AWEHPLeftSlideToUserProtocol, AWEHPContentVCChannelConfigProtocol>

@property (copy, nonatomic) NSDictionary *landingParams;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> channelConfig;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (nonatomic) long long loadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transition_didStartTransitionWithContext:(id)a0;
- (id)currentAweme;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (void)setupSubView;
- (id)getHandleLeftSlideToUserTableVC;
- (void)configWithLandingParams:(id)a0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)viewDidLoad;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;

@end
