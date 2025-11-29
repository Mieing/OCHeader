@class NSArray, NSString;

@interface AWEIMMessageListPopupViewComponent : AWEIMComponentBase <AWEIMInteractiveEmojiAction>

@property (retain, nonatomic) NSArray *servicePriority;
@property (nonatomic) BOOL needTryShowWhenViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)didTryShowInteractiveAnimationAfterViewDidAppear;
- (void)__tryShowPopupViewAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
