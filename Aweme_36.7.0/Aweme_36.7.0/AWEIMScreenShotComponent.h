@class NSString, AWEIMMessageConversation;
@protocol AWEIMMessageTableViewInterface;

@interface AWEIMScreenShotComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isOnScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_onUserDidTakeScreenshot;
- (BOOL)p_isShowWatchOnceMessageDetail:(BOOL)a0;
- (void)p_sendScreenShotNoticeMessage;
- (id)p_getScreenShotNoticeKey;
- (void).cxx_destruct;

@end
