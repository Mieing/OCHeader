@class AWELikeWorkViewController, NSString;

@interface AWELikeTabHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol, AWELikeTabHomeComponentProtocol>

@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) AWELikeWorkViewController *likeVC;
@property (nonatomic) BOOL showLightThemeSettingView;
@property (nonatomic) BOOL shouldShowViewRecordGuide;
@property (nonatomic) long long preFavoritePermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (void)onClickSegmentItemAgainAtIndex:(long long)a0;
- (id)likeTabModel;
- (void)updateFavoriteTabIcon;
- (void)setupFavoriteTabIconBind:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)title;
- (id)originalTitle;
- (void)viewDidDisappear;
- (void)onInit;

@end
