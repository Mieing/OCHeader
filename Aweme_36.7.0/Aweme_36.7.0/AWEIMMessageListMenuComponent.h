@class NSString, AWEIMComponentManager;
@protocol AWEIMMessageMenuInterface, IESIMMessageListMessageMenuService, AWEIMMessageTableViewInterface;

@interface AWEIMMessageListMenuComponent : AWEIMComponentBase <AWEIMMessageListMenuInterface, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMComponentLazyCreate, AWEIMMessageBaseVCLayoutAction>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<AWEIMMessageMenuInterface> currentShowMenuCellComponent;
@property (weak, nonatomic) id<IESIMMessageListMessageMenuService> messageListMessageMenuService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)lazyComponentWakeupInterface;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tapLocationInScreen:(struct CGPoint { double x0; double x1; })a1 menuTypeList:(id)a2 menuPanelOptions:(unsigned long long)a3 moreEmoticon:(BOOL)a4 onCell:(id)a5 extra:(id)a6;
- (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highLocationInScreen:(struct CGPoint { double x0; double x1; })a1 lowLocationInScreen:(struct CGPoint { double x0; double x1; })a2 tryHighLocationFirst:(BOOL)a3 menuTypeList:(id)a4 menuPanelOptions:(unsigned long long)a5 onCell:(id)a6 extra:(id)a7;
- (void)dismissMenuWithoutAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInScreen;
- (void)doMenuActionFor:(unsigned long long)a0 withMessage:(id)a1 msgContext:(id)a2;
- (id)p_prepareShowListOnCell:(id)a0 menuTypeList:(id)a1 extra:(id)a2;
- (void)p_trackMenuClickEvent:(id)a0 withMessage:(id)a1 context:(id)a2 hasRedDot:(BOOL)a3 extra:(id)a4;
- (void)p_trackMenuShowEvents:(id)a0 withMessage:(id)a1 context:(id)a2 withExtra:(id)a3;
- (void)p_trackMenuEvent:(id)a0 eventType:(id)a1 message:(id)a2 context:(id)a3 extra:(id)a4;
- (void)p_bizTrackMenuClickItem:(id)a0 message:(id)a1 context:(id)a2 hasRedDot:(BOOL)a3;
- (id)p_addFoldMessageParams:(id)a0 message:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)dismissMenu;

@end
