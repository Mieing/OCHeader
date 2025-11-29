@class AWEUserModel, NSSet, AWEProfileReplaceMusicAwemeDetailManager, NSString, UIView, AWEReplaceMusicListDataController, DUXBottomNotification;

@interface AWEProfileReplaceMusicSnackBarManager : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) DUXBottomNotification *replaceMusicSnackBar;
@property (nonatomic) long long audioProhibited;
@property (retain, nonatomic) NSSet *cacheAwemeIDs;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEReplaceMusicListDataController *dataController;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileReplaceMusicAwemeDetailManager *manager;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)updateWithAwemeList:(id)a0 userModel:(id)a1 sourceView:(id)a2;
- (void)dismissSnackBarWhenSourcePageDisappear;
- (id)findCacheAwemeIDs;
- (BOOL)awemeShouldReplaceMusic:(id)a0;
- (void)updateReplaceSnakeBarUI:(id /* block */)a0;
- (BOOL)currentTimeCanShowSnackBar;
- (void)updateCacheAwemeIDs;
- (void)updateCacheShownTime;
- (void)trackForSnackBarShow;
- (void)openReplaceMusicFullPageViewController;
- (void)dismissSnakeBar:(id)a0;
- (void)coverImageForFirstItem:(id /* block */)a0;
- (id)awemeCoverURL:(id)a0;
- (id)cacheAwemeKey:(id)a0;
- (id)triggerSnakeBarKeys;
- (id)snackBarLastShownTimeKey;
- (id)findCacheShownTime;
- (void)trackForSnackBarClick:(id)a0;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;

@end
