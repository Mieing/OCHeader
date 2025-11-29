@protocol AWEPostPageQuickStoryShareService;

@interface AWEFriendsCameraQuickStoryShareComponent : ACCFeatureComponent

@property (retain, nonatomic) id<AWEPostPageQuickStoryShareService> postPageQuickStoryShareService;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;
- (void)dealloc;

@end
