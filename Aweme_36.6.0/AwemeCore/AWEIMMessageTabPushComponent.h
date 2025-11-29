@class NSDictionary;

@interface AWEIMMessageTabPushComponent : AWEIMComponentBase

@property (copy, nonatomic) NSDictionary *startIMTrackerInfo;

- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)p_trackIMOuterPushWithKey:(id)a0;
- (void).cxx_destruct;

@end
