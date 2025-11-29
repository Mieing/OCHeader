@class NSArray, AWEHPTabBarSkinProxy, AWETabBarBackgroundImageRenderer;
@protocol AWETabBarSkinProxyProtocol;

@interface AWEHPTabBarBGSkinManager : NSObject

@property (nonatomic) double didEnterBackgroundTimestamp;
@property (retain, nonatomic) AWEHPTabBarSkinProxy *hpTabBarSkinProxy;
@property (retain, nonatomic) id<AWETabBarSkinProxyProtocol> takeOverProxy;
@property (copy, nonatomic) NSArray *skinProxyArray;
@property (readonly, nonatomic) AWETabBarBackgroundImageRenderer *normalModeBgRender;

+ (Class)aAWETabBarSkinAdapterClass;
+ (id)sharedInstance;

- (BOOL)isSkinEnabledWithModeType:(long long)a0;
- (id)renderedImageModelWithReloadType:(long long)a0 modeType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)skinContainerViewParamsWithReloadType:(long long)a0 modeType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (void)addNotification;
- (void)removeNotification;
- (id)skinConfigWithModeType:(long long)a0;
- (id)aAWETabBarSkinAdapter;
- (BOOL)bottomChannelCanShowTabBarBGSkinWithChannelID:(id)a0 currentModeType:(long long)a1;
- (BOOL)topChannelCanShowTabBarBGSkinWithChannelID:(id)a0;
- (void)p_loadSkinProxyArray;
- (void)p_chooseTakeOverProxy;
- (BOOL)p_isSkinProxyReadyTakeOver:(id)a0;
- (void)hotReloadTabBarSkin;
- (void)p_updateTakeOverProxyWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
