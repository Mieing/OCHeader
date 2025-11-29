@class DUXBottomNotification, NSString, AWEFavoriteRecommendDataController;

@interface AWEFavoriteRecommendSnakeBarManager : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) DUXBottomNotification *recommendCreateFavoriteSnakeBar;
@property (retain, nonatomic) AWEFavoriteRecommendDataController *favoriteRecommendDataController;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL isFromFansTool;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) id /* block */ createRecommendFavoriteSuccessCompletion;
@property (copy, nonatomic) id /* block */ fansToolSnackBarShowedFaild;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)updateRecommendSnakeBarNextShownDateWithType:(unsigned long long)a0 isFromFansTool:(BOOL)a1;
- (id)recommendCreateFavoriteSnakeBarShowGapDictionary;
- (unsigned long long)recommendCreateFavoriteSnakeBarShowGapAfterCreateSuccess;
- (unsigned long long)recommendCreateFavoriteSnakeBarShowGapAfterChangeTab;
- (void)dismissRecommendCreateFavoriteSnakeBar:(unsigned long long)a0;
- (void)openFavoriteRecommendSelectVideoViewController;
- (void)updateRecommendCreateFavoriteSnakeBarUI:(id /* block */)a0;
- (BOOL)canSnackBarFromFansToolsShow;
- (void)trackRecommendFavoriteCreateSnakeBarFromFansToolShow;
- (void)trackRecommendFavoriteCreateSnakeBarShow;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;

@end
