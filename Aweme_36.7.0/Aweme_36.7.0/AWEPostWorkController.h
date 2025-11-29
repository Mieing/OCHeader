@class NSString;

@interface AWEPostWorkController : AWEPostWorkBaseController <AWEUserMessage, AWEPostWorkViewControllerActionsProtocol, AWEUserWorkControllerFavoriteCorrectionProtocol>

@property (nonatomic) BOOL needRefreshData;
@property (nonatomic) BOOL needCheckSyncData;
@property (nonatomic) long long diggChangeCount;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;

- (void)didFinishLoginWithUid:(id)a0;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)startTimingForTrack;
- (void)trackEventForStayTime;
- (void)momentDidPublishNotification:(id)a0;
- (void)handleRecycledWorksNotification:(id)a0;
- (void)handleIMMessageRecalledNotification:(id)a0;
- (id)basicTrackParams;
- (void)updateDraft;
- (void)updateEmptyConfig:(id)a0;
- (id)vacantTrackParams;
- (id)replaceGenderText:(id)a0;
- (void)scrollToSavedContentOffsetWithAnimated:(BOOL)a0;
- (void)favoriteChangedWithCount:(long long)a0;
- (void)didReceiveRefreshData:(id)a0;
- (void)storyAwemeExchangeType:(id)a0;
- (void)switchTimeSortWhenCreateAweme;
- (void)handleVideoDisableRelationBarNotification:(id)a0;
- (void)showScrollTopButtonIfNeeded;
- (void)syncAwemeDataIfNeed;
- (void)checkDiggChangedCorrection;
- (void)trackDraftCountIfNeeded;
- (void)refreshDataForLoginSuccess;
- (id)user;
- (void)applicationWillResignActive;
- (id)viewController;
- (id)viewModel;
- (void)dealloc;
- (id)dataController;
- (void)containerViewDidLoad;

@end
