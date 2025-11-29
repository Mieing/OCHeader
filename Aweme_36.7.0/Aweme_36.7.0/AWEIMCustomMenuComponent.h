@class NSArray, AWEIMEmojiReplyMenuView, AWEIMMessage, NSString, AWEIMMessageInteractiveUserListViewController;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMCustomMenuComponent : AWEIMComponentBase <IESIMMessageListMessageMenuService, IESIMMessageListLifeCycleAction, AWEIMMessageTableViewAction, AWEIMMessageListComponent>

@property (weak, nonatomic) AWEIMEmojiReplyMenuView *menuView;
@property (retain, nonatomic) AWEIMMessageInteractiveUserListViewController *userListVC;
@property (retain, nonatomic) NSArray *fullReplyViewModels;
@property (weak, nonatomic) AWEIMMessage *currentMessage;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)tableViewDidScroll:(id)a0;
- (void)msgList_viewWillDisappear;
- (void)msg_longPressMenuDidUpdateEmoticonOfMessage:(id)a0 insertEmojis:(id)a1;
- (void)msg_showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tapLocationInScreen:(struct CGPoint { double x0; double x1; })a1 menuItemList:(id)a2 menuPanelOptions:(unsigned long long)a3 moreEmoticon:(BOOL)a4 onCell:(id)a5 extra:(id)a6;
- (void)msg_showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highLocationInScreen:(struct CGPoint { double x0; double x1; })a1 lowLocationInScreen:(struct CGPoint { double x0; double x1; })a2 tryHighLocationFirst:(BOOL)a3 menuItemList:(id)a4 menuPanelOptions:(unsigned long long)a5 onCell:(id)a6 extra:(id)a7;
- (void)msg_showEmojiReplyListWithCell:(id)a0 isDoubleLike:(BOOL)a1 selectedKey:(id)a2;
- (void)msg_showEmojiReplyListComponentWithCell:(id)a0 isDoubleLike:(BOOL)a1 selectedKey:(id)a2;
- (void)msg_dismissMenu;
- (void)msg_dismissMenuWithoutAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })msg_menuFrameInScreen;
- (void)p_showMenuWithContext:(id)a0;
- (id)p_message:(id)a0;
- (id)p_conversation:(id)a0;
- (void)p_bizTrackMenuClickItem:(id)a0 message:(id)a1 conversation:(id)a2 extraParams:(id)a3;
- (id)findHostViewFromeCell:(id)a0;
- (id)p_buttonListWithMenuList:(id)a0 emojiList:(id)a1;
- (id)p_redDotButtonListWithMenuList:(id)a0;
- (void)p_bizTrackShowPanelWithButtonList:(id)a0 redDotButtonList:(id)a1 withMessage:(id)a2 conversation:(id)a3;
- (void).cxx_destruct;

@end
