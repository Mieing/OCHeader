@class NSString, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol, AFDContainerViewControllerDelegateProtocol, AWEFamiliarViewControllerProtocol;

@interface AFDFamiliarFeedInHomepageManager : NSObject <AFDFamiliarFeedInHomepageManagerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFamiliarViewControllerProtocol, AFDContainerViewControllerDelegateProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol> *familiarFeedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)trackFamiliarRefreshWithMethod:(id)a0;
- (void)destroyFamiliarViewController;
- (void).cxx_destruct;

@end
