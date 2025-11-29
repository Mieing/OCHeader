@class NSString, NSMutableDictionary;

@interface AWEIMChatListOnlineGreetComponent : AWEIMComponentBase <AWEIMChatListOnlineGreetService>

@property (nonatomic) long long firstFrameDuration;
@property (nonatomic) long long cacheValidTimeMin;
@property (nonatomic) long long cacheValidTimeMax;
@property (nonatomic) double viewWillAppearTime;
@property (retain, nonatomic) NSMutableDictionary *lastResults;
@property (retain, nonatomic) NSMutableDictionary *lastResultExpireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (BOOL)shouldShowOnlineGreetIcon:(BOOL)a0 chat:(id)a1 oldOnlineState:(BOOL)a2;
- (void).cxx_destruct;

@end
