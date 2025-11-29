@class NSString;

@interface AWEPadTabbarGestureController : NSObject <AWEBizTabBarGlobalPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (id)aAWEPadSplitScreenAdapter;
- (BOOL)isPluginEffect;
- (void)tabBarWillChangeSelectedTabWithCurrentSelectedTabID:(id)a0 previousSelectedTabID:(id)a1;

@end
