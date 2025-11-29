@class NSString;

@interface FavAddItemHelper : MMObject <IFavoritesExt, MMTipsViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFavAddHelper;
+ (void)freeFavAddHelper;

- (void)addFavItem:(id)a0;
- (void)addFavItem:(id)a0 withSuccessTips:(id)a1;
- (void)addFavItem:(id)a0 withTipWording:(id)a1;
- (BOOL)addFavItemButShowCapacityTip:(id)a0;
- (BOOL)addFavItemButShowExpireOrBigFileTip:(id)a0;
- (BOOL)addFavItemButShowWarningTip:(id)a0 withTip:(id)a1;
- (void)realAddFavItem:(id)a0;
- (void)realAddFavItem:(id)a0 successTips:(id)a1;
- (void)webReport:(id)a0;
- (void)checkShowFavIntro:(id)a0 customTips:(id)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;

@end
