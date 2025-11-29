@class AWEIMMessageConversation, NSArray, UIVisualEffectView, NSString, UIView, AWEIMComponentManager;
@protocol AWEIMMessageListFooterInterface, AWEIMMessageDataProtocol, AWEIMMessageListLayoutInterface, AWEIMMessageListComponentCenter, IESIMMessageListViewControllerProtocol, IESIMActionSheetViewProtocol;

@interface AWEIMMessageListActionSheetComponent : AWEIMComponentBase <AWEIMMessageListActionSheetInterface, AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMMessageBaseVCLayoutAction, AWEIMMessageListComponent>

@property (retain, nonatomic) UIView<IESIMActionSheetViewProtocol> *actionSheetView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) NSArray *itemModels;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (weak, nonatomic) id<IESIMMessageListViewControllerProtocol> messageListViewController;
@property (weak, nonatomic) id<AWEIMMessageListFooterInterface> footerService;
@property (weak, nonatomic) id<AWEIMMessageListLayoutInterface> layoutService;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) BOOL disableRemoveActionSheetWhenDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getCurrentSelectMessageArray;
- (void)hostVC_viewDidAppear;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)resetChatMultiSelectState;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)addNotification;
- (void)handleCloseContactVCNotification:(id)a0;
- (void)p_kvoConversationMultiSelectStateUpdate;
- (void)p_updateBackgroundColor;
- (void)p_kvoConversationMultiSelectCount;
- (void)p_addNotifacation;
- (void)p_dismissActionSheet;
- (void)p_showActionSheetIfNeed;
- (void)p_trackItemTappedWithItem:(id)a0;
- (void)trackPostBtnWithEventType:(id)a0;
- (void)trackFormatPreviewEditPageClickWithItem:(id)a0;
- (void).cxx_destruct;
- (id)dataSource;
- (void)dealloc;

@end
