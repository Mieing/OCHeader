@interface AWEIMMessageTabScreenShotComponent : AWEIMComponentBase

@property (nonatomic) BOOL isChatListVisable;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)p_onUserDidTakeScreenShot;
- (void)p_printBasicInfo;
- (void)p_printChatInfo:(id)a0 order:(long long)a1;
- (void)dealloc;

@end
