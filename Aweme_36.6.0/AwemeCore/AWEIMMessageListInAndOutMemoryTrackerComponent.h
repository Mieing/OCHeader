@class NSDictionary;
@protocol AWEIMMessageListBulletTrackerInterface;

@interface AWEIMMessageListInAndOutMemoryTrackerComponent : AWEIMComponentBase

@property (nonatomic) double appMemoryBeforeVCInit;
@property (nonatomic) double appMemoryComponentInit;
@property (nonatomic) double appMemoryOnVCDisplay;
@property (retain, nonatomic) NSDictionary *bulletTrackInfo;
@property (copy, nonatomic) NSDictionary *serviceChatTrackInfo;
@property (nonatomic) BOOL isFloatOnEnter;
@property (weak, nonatomic) id<AWEIMMessageListBulletTrackerInterface> bulletTrackerService;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)p_track;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
