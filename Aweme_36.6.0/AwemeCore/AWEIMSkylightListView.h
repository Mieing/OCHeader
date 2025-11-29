@class AWEIMSkylightContext, NSArray, NSString, AWEIMComponentManager, UIView, AWEIMOnlineContactRequestAvatarListV3DataController;
@protocol AWEIMSkylightViewInterface, AWEIMOnlineContactAvatarListViewDelegate;

@interface AWEIMSkylightListView : UIView <AWEUserMessage, AWEIMOnlinePrivacyDisrecommendMessage, AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMOnlineContactAvatarListV2ViewProtocol>

@property (retain, nonatomic) AWEIMOnlineContactRequestAvatarListV3DataController *listDataController;
@property (copy, nonatomic) NSArray *sectionIDArr;
@property (nonatomic) BOOL needUpdate;
@property (copy, nonatomic) id /* block */ refreshV3Block;
@property (nonatomic) BOOL aggregatingFlashBackAlbum;
@property (retain, nonatomic) AWEIMSkylightContext *componentContext;
@property (weak, nonatomic) id<AWEIMSkylightViewInterface> skylightInterface;
@property (weak, nonatomic) id<AWEIMOnlineContactAvatarListViewDelegate> delegate;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) UIView *separatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)memoriesSwitchDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewHeight:(double)a1 pageIdentifier:(id)a2;
- (void)updateCloseFriendsGuideShown;
- (id)zoomTransitionStartViewForMoment;
- (void)didDisrecommendListChange;
- (void)checkShouldHidden;
- (void)updateDataSourceWithNeedRefresh:(BOOL)a0 ignoreFrequency:(BOOL)a1;
- (void)performShouldHiddenDelegate;
- (void)p_setupCommon;
- (void)p_resetDataFromDisk;
- (void)p_resetNeedUpdate;
- (void)p_handleRefreshNotification:(id)a0;
- (void)p_onPersonalRecommendChanged:(id)a0;
- (void)refreshWithIgnoreFrequency:(BOOL)a0;
- (id)currentSnapshotVMDict;
- (void)refreshSkylightIfNeed:(BOOL)a0;
- (void)hidePostWithUid:(id)a0;
- (BOOL)hasOnlineFriend;
- (void)p_setupUI;
- (void)viewDidAppear;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)resetData;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)refreshIfNeeded;
- (void)resetContentOffset:(BOOL)a0;
- (void)updateWithUser:(id)a0;
- (void)viewWillDisappear;

@end
