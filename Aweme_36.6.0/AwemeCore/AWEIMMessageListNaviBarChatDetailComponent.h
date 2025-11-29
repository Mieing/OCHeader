@class NSArray, AWEIMMessageBaseVCMoreButton, NSString;
@protocol AWEIMMessageListNaviBarInterface;

@interface AWEIMMessageListNaviBarChatDetailComponent : AWEIMComponentBase <IESIMActionSheetDelegate, AWEIMMessageListNaviBarViewProvider, AWEIMOverseaUserMutingAction, AWEIMMessageListNaviBarChatDetailInterface>

@property (retain, nonatomic) AWEIMMessageBaseVCMoreButton *chatDetailButton;
@property (copy, nonatomic) NSArray *reportAndDeleteActionModels;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarInterface> naviBarService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (BOOL)isStranger;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (void)changeToOverseaUserState;
- (void)transferToTarget:(unsigned long long)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)trackChatSettingClickEvent:(id)a0;
- (id)singleChatDetailViewControllerUrl;
- (id)p_conversation;
- (void)p_didClickNormalChatDetail;
- (void)p_didClickLiveConsultChatDetail;
- (void)p_didClickChatDetailButton:(id)a0;
- (void)p_transferToChatDetailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_transferToChatDetailWithCheckWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_transferToUserProfileWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_transferToSelectReportAndDeleteWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_transferToReportWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_transferToDeleteWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
