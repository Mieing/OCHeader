@class UIViewController, NSString, AWEPageContext, NSLock, NSNumber;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewModelHelper;

@interface AWEPlayInteractionFavoriteElementViewModel : NSObject <AWEPlayInteractionFavoriteElementViewModelProtocol>

@property (retain, nonatomic) NSLock *favoriteLock;
@property (nonatomic) BOOL isRequestFavoriteAndFolderCombine;
@property (nonatomic) double favoriteTime;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) id<AWEPlayInteractionViewModelHelper> viewModelHelper;
@property (nonatomic) unsigned long long favoriteActionStatus;
@property (nonatomic) BOOL isFavoritePopoverShowed;
@property (nonatomic) BOOL shouldShowAnimation;
@property (nonatomic) BOOL mustShowFavoriteToast;
@property (retain, nonatomic) NSNumber *favoriteToastBottomPadding;
@property (nonatomic) BOOL favoriteToastShow;
@property (nonatomic) BOOL isFavoriteRequestFinished;
@property (nonatomic) BOOL hiddenNoticeView;
@property (nonatomic) BOOL hideUnfavoriteBar;
@property (nonatomic) BOOL isDisplayingOnScreen;
@property (nonatomic) double maxPlayBackTime;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ favoriteActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)dealloc;
- (id)referString;
- (id)logExtraDict;
- (id)enterFrom;
- (id)fromModel;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)onFavoriteButtonClicked:(id)a0;
- (void)resetFavoriteTime;
- (void)errorHmdTrackWithTrackService:(id)a0 WithStatusCode:(id)a1 isModelNull:(BOOL)a2 NSError:(id)a3 withEnterFrom:(id)a4;
- (void)hmdTrackServiceWithStatusCode:(id)a0 withLogid:(id)a1 withTrackService:(id)a2 withEnterFrom:(id)a3;
- (void)doSafeFavoriteWithConfig:(id)a0;
- (void)setLockForFavoriteAnimation;
- (void)favoriteStatusUpdateNotification:(id)a0;
- (BOOL)canFavorite;
- (void)interactor_onFavoriteButtonClicked:(id)a0;
- (void)showUnfavoriteBottomNotification;
- (void)unfavoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (void)favoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (void)trackFavoriteEventWithFavoriteAction:(BOOL)a0 Enterfrom:(id)a1 enterMethod:(id)a2;
- (void)updateFavoriteTime;
- (void)onFavoriteButtonLongPressed:(id)a0;
- (void)handleNeedFavoriteActionNotification:(id)a0;
- (void)handleBatchFavoriteActionNotification:(id)a0;
- (void)presentFavoriteFolderHint:(BOOL)a0 toastType:(id)a1 enterMethod:(id)a2 isFromCommentRedButton:(BOOL)a3 shouldBlockNoticeView:(BOOL)a4;
- (void)interactor_onFavoriteButtonLongPressed:(id)a0;
- (BOOL)enableFavouriteUnloginTrack;
- (void)favoriteWithConfig:(id)a0;
- (void)postFavoriteButtonClickedNotificationWithAction:(unsigned long long)a0 shouldBlockSnackBar:(BOOL)a1 isFromInteractionButton:(BOOL)a2 EnterMethod:(id)a3 hasFolderCache:(BOOL)a4;
- (void)postFavoriteStatusUpdatedNotificationsWithParams:(id)a0;
- (void)toggleFavoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4 shouldIgnoreFavoriteTrack:(BOOL)a5;
- (id)generateFavoriteButtonClickedNotiUserInfoWithAction:(unsigned long long)a0 shouldBlockSnackBar:(BOOL)a1 isFromInteractionButton:(BOOL)a2 EnterMethod:(id)a3 activateFavoriteActions:(BOOL)a4;
- (void)toggleFavoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
