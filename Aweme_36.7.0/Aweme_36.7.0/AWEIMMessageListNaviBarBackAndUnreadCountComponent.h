@class NSString, UIView;
@protocol AWEIMMessageVCNavigationUnreadViewProtocol;

@interface AWEIMMessageListNaviBarBackAndUnreadCountComponent : AWEIMComponentBase <AWEIMNavigationUnreadViewDelegate, AWEIMMessageListNaviBarViewProvider, AWEIMMessageListNaviBarBackAndUnreadCountInterface>

@property (retain, nonatomic) UIView<AWEIMMessageVCNavigationUnreadViewProtocol> *backAndUnreadCountView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)backWithCompletion:(id /* block */)a0;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (id)p_conversation;
- (void)p_didClickBackAndUnreadCountView;
- (long long)filterUnreadCoundInCurrentConversation:(long long)a0;
- (void).cxx_destruct;

@end
