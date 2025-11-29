@class UIImageView, UIViewController, NSString;

@interface AWEPluginFavoritesCustomImpl : NSObject <BDPFavoritesPluginDelegate>

@property (weak, nonatomic) UIViewController *guideVC;
@property (retain, nonatomic) UIImageView *staticView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getSettings;
- (id)descString;
- (void)showCancelToastWithUniqueId:(id)a0;
- (id)bdp_hostGameGuideViewWithUniqueId:(id)a0 extraInfo:(id)a1;
- (id)getCurrentUserIDWithAppID:(id)a0;
- (void)cancelFavoriteWithUniqueId:(id)a0;
- (void)event:(id)a0 uniqueID:(id)a1 param:(id)a2;
- (BOOL)bdp_showFavoritesButtonForType:(long long)a0;
- (BOOL)bdp_removeFromFavoritesForType:(long long)a0 uniqueId:(id)a1 extraInfo:(id)a2;
- (BOOL)bdp_addToFavoritesForType:(long long)a0 uniqueId:(id)a1 extraInfo:(id)a2;
- (void).cxx_destruct;
- (id)imageURL;
- (id)titleString;

@end
