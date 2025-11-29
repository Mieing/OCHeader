@class AWEIMLifeServiceChatMenuShortModel, NSIndexSet, AWEIMConversationDynamicSettingViewModel, NSString, NSArray, AWEIMMessageConversation;
@protocol AWEIMLifeServiceChatMenuViewModelDelegate;

@interface AWEIMLifeServiceChatMenuViewModel : NSObject <AWEIMLifeServiceChatMenuViewDelegate, AWEIMLifeServiceChatMenuViewModelInterface>

@property (retain, nonatomic) AWEIMLifeServiceChatMenuShortModel *currentShowingModel;
@property (nonatomic) long long currentShowingModelIndex;
@property (retain, nonatomic) NSIndexSet *replyTypeSet;
@property (retain, nonatomic) NSIndexSet *jumpSchemaSet;
@property (retain, nonatomic) AWEIMConversationDynamicSettingViewModel *dynamicSettingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuViewModelDelegate> delegate;
@property (copy, nonatomic) NSArray *firstLevelMenuModels;
@property (copy, nonatomic) NSArray *currentSubMenuModels;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL switchEnable;

- (unsigned long long)countOfMenu;
- (void)__performActionWithModel:(id)a0;
- (BOOL)canClickSwitchButton;
- (void)didClickSwitchButton;
- (void)fetchModelsWithCompletion:(id /* block */)a0;
- (void)tryCloseSubmenuWithCompletion:(id /* block */)a0;
- (unsigned long long)countOfSubmenus;
- (void)didClickMenuButtonWithIndex:(long long)a0 buttonframe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didClickSubMenuItemWithIndex:(long long)a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)p_processCacheModelsWithCacheJsonStr:(id)a0;
- (void)__getMenuFromServerWithCompletion:(id /* block */)a0;
- (void)__didClickMenuItemWithModel:(id)a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)trackMenuClickWithModel:(id)a0 index:(long long)a1;
- (void)trackSubmenuClickWithModel:(id)a0 index:(long long)a1;
- (void)__performShowSubMenuActionFor:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)__isMessageType:(long long)a0;
- (BOOL)__isJumpType:(long long)a0;
- (void)__performJumpActionWithModel:(id)a0;
- (BOOL)enableFetchConversationSettingMenus;
- (void)__filterInvalidModel;
- (void)__saveMenuListToCache:(id)a0 dynamicList:(id)a1;
- (id)generalDiscriptionOfMenuFunctionType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
