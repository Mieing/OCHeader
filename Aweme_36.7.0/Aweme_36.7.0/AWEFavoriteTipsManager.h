@class NSObject, NSString, NSDictionary, AWEAwemeModel, AWEFavoriteFolderBaseInfoModel, AWEFavoriteVideoSnackBarView;
@protocol OS_dispatch_group, AWEFavoriteTipsManagerDelegate;

@interface AWEFavoriteTipsManager : NSObject <AWEFavoriteVideoSnackBarViewDelegate>

@property (retain, nonatomic) AWEFavoriteVideoSnackBarView *snackBarView;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (weak, nonatomic) id<AWEFavoriteTipsManagerDelegate> delegate;
@property (nonatomic) BOOL shouldShowFavoriteFolderFloatingLayer;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *baseInfoModel;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *collectionListGroup;

+ (Class)aAWEPadModuleAdapterClass;
+ (double)snackBarLeftPadding;
+ (double)snackBarHeight;
+ (double)snackBarBottomPadding;
+ (id)sharedInstance;

- (id)aAWEPadModuleAdapter;
- (void)handleLightLandingWebViewControllerWillShowNotification:(id)a0;
- (void)didClickedSnackBar;
- (void)showSnackBarWithModel:(id)a0 tapAction:(id /* block */)a1 extraInfo:(id)a2;
- (void)showSnackBarWithModel:(id)a0 tapAction:(id /* block */)a1 extraInfo:(id)a2 barBottomPadding:(double)a3;
- (void)dismissSnackBar;
- (void)p_showSnackBar;
- (void)didEndDisplayAwemeModel:(id)a0;
- (void)transforToTargetSchema;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
