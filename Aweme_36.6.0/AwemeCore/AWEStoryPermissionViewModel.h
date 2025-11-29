@class AWESettingSectionModel, NSString, AWESettingItemModel, AWEStoryPermissionContext, AWEStoryPermissionDialogConfig, AWEStoryPermissionPanelConfig;

@interface AWEStoryPermissionViewModel : AWEPrivacySettingBaseViewModel <AFDAwemePermissionMessage>

@property (retain, nonatomic) AWEStoryPermissionContext *context;
@property (retain, nonatomic) AWEStoryPermissionPanelConfig *panelConfig;
@property (retain, nonatomic) AWEStoryPermissionDialogConfig *storyTTLDialogConfig;
@property (retain, nonatomic) AWEStoryPermissionDialogConfig *storyInteractiveDialogConfig;
@property (retain, nonatomic) AWESettingSectionModel *localSection;
@property (retain, nonatomic) AWESettingSectionModel *globalSection;
@property (retain, nonatomic) AWESettingItemModel *visibilityItem;
@property (retain, nonatomic) AWESettingItemModel *ttlItem;
@property (retain, nonatomic) AWESettingItemModel *interactiveScopeItem;
@property (nonatomic) long long exclusionCount;
@property (nonatomic) long long partOfVisibleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (id)commonTrackParams;
- (void)storyTTLDidChange:(id)a0;
- (void)storyInteractiveScopeDidChange:(id)a0;
- (void)updateVisibilityItem;
- (void)fetchVisibilityCountIfNeeded;
- (void)setTitle:(id)a0 forItem:(id)a1;
- (void)showVisibilityPanel;
- (void)setDetail:(id)a0 forItem:(id)a1;
- (void)didSelectStoryTTLItem;
- (void)didSelectStoryInteractiveItem;
- (void)didSelectStoryTTL:(long long)a0 onViewController:(id)a1;
- (void)showSelectSheetWithTitle:(id)a0 options:(id)a1 selectedIndex:(long long)a2 selectBlock:(id /* block */)a3;
- (void)changeStoryTTL:(long long)a0;
- (void)didSelectStoryInteractiveScope:(long long)a0 onViewController:(id)a1;
- (void)changeStoryInteractiveScope:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
