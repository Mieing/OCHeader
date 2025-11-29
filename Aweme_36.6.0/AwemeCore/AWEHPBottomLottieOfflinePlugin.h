@class NSString;

@interface AWEHPBottomLottieOfflinePlugin : NSObject <AWEBizTabBarGlobalPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabBarDidSetHidden:(BOOL)a0;
- (BOOL)isPluginEffect;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground;

@end
