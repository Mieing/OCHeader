@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEHPTabBarSkinProxy : NSObject <AWETabBarSkinProxyProtocol>

@property (copy, nonatomic) NSDictionary *skinData;
@property (retain, nonatomic) NSMutableDictionary *skinConfigMap;
@property (retain, nonatomic) NSMutableDictionary *imageRenderMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSkinEnabledWithModeType:(long long)a0;
- (id)renderedImageModelWithReloadType:(long long)a0 modeType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)skinContainerViewParamsWithReloadType:(long long)a0 modeType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)skinConfigWithModeType:(long long)a0;
- (void)p_reloadData;
- (BOOL)reloadDataWithModeType:(long long)a0;
- (BOOL)canTopChannelShowSkin:(id)a0 modeType:(long long)a1;
- (BOOL)canBottomChannelShowSkin:(id)a0 modeType:(long long)a1;
- (void)p_loadData;
- (id)p_skinHambConfigWithSkinData:(id)a0;
- (void)p_storeValidSkinConfig:(id)a0 modeType:(long long)a1;
- (BOOL)p_canNormalModeTopChannelShowSkin:(id)a0;
- (BOOL)p_canNormalModeTopChannelShowSkinForTabsEffect:(id)a0;
- (BOOL)p_canNormalModeBottomChannelShowSkin:(id)a0;
- (BOOL)p_canTeenModeBottomChannelShowSkin:(id)a0;
- (BOOL)p_canBasicModeBottomChannelShowSkin:(id)a0;
- (BOOL)p_canNormalModeBottomChannelShowSkinForTabsEffect:(id)a0;
- (id)p_imageRenderWithModeType:(long long)a0 reloadType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
