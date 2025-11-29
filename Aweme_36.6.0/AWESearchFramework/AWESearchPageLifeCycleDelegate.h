@class NSString, SearchDynamicPageLifeCycleImpl;

@interface AWESearchPageLifeCycleDelegate : NSObject <SearchDynamicServiceProtocol>

@property (weak, nonatomic) SearchDynamicPageLifeCycleImpl *lifeCycleImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (id)searchServiceID;

- (void)containerDidCreated:(id)a0 view:(id)a1;
- (void)addNotifications;
- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)startPlay:(id)a0;
- (void)willLoop:(id)a0;
- (void)handleNotificationsWithAction:(long long)a0 userInfo:(id)a1;
- (id)initWithLifeCycleImpl:(id)a0;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)stop:(id)a0;
- (void)pause:(id)a0;

@end
