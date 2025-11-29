@class NSNumber, NSString, AWEPageContext, NSLock, DUXBottomNotification;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionMusicFavoriteViewModel : AWEPlayInteractionBaseElementViewModel <AWEPlayInteractionMusicFavoriteViewModelProtocol>

@property (retain, nonatomic) NSLock *favoriteLock;
@property (nonatomic) double favoriteTime;
@property (weak, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) unsigned long long favoriteActionStatus;
@property (nonatomic) BOOL shouldShowAnimation;
@property (retain, nonatomic) NSNumber *favoriteToastBottomPadding;
@property (nonatomic) BOOL isDisplayingOnScreen;
@property (nonatomic) BOOL isFavoriteRequestFinished;
@property (nonatomic) BOOL hideFavoriteBar;
@property (nonatomic) BOOL hideUnfavoriteBar;
@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFavoriteButtonClicked:(id)a0;
- (void)collectionAction;
- (id)p_publicTrackParams;
- (void)resetFavoriteTime;
- (void)doSafeFavoriteWithFavoriteBlock:(id /* block */)a0 unfavoriteBlock:(id /* block */)a1 otherActionBlock:(id /* block */)a2 actionFailedBlock:(id /* block */)a3 actionSuccessBlock:(id /* block */)a4 enterMethod:(id)a5 enterFrom:(id)a6;
- (void)trackCollectionAction;
- (void)setLockForFavoriteAnimation;
- (void)favoriteStatusUpdateNotification:(id)a0;
- (id)generateFavoriteButtonClickedNotiUserInfo;
- (BOOL)canFavorite;
- (void)interactor_onFavoriteButtonClicked:(id)a0;
- (void)favoriteWithFavoriteBlock:(id /* block */)a0 unfavoriteBlock:(id /* block */)a1 otherActionBlock:(id /* block */)a2 actionFailedBlock:(id /* block */)a3 actionSuccessBlock:(id /* block */)a4 enterMethod:(id)a5 enterFrom:(id)a6;
- (void)postFavoriteStatusUpdatedNotifications;
- (void)toggleFavoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 shouldIgnoreFavoriteTrack:(BOOL)a4 completion:(id /* block */)a5;
- (void)showFavoriteBottomNotification;
- (void)showUnfavoriteBottomNotification;
- (void)unfavoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (void)favoriteAweme:(id)a0 pageType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (void)trackFavoriteEventWithFavoriteAction:(BOOL)a0 Enterfrom:(id)a1 enterMethod:(id)a2;
- (void)updateFavoriteTime;
- (void).cxx_destruct;
- (id)init;

@end
