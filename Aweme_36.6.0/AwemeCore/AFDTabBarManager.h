@class NSString;

@interface AFDTabBarManager : NSObject <AFDTabBarManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)p_addObserver;
- (void)p_handleTabBarChange:(id)a0;
- (void)p_handleChangeToFamiliar;
- (void)p_handleChangeFromFamiliar;
- (id)init;
- (void)dealloc;

@end
