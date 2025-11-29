@class NSString, NSMutableArray, AWEUserModel;

@interface AWEIMConversationSendUserActionManager : AWEIMComponentBase <AWEIMMessageListUserInfoAction, AWEIMConversationSendUserActionInterface>

@property (retain, nonatomic) NSMutableArray *consumers;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (nonatomic) BOOL firstFrameOpt;
@property (nonatomic) BOOL enableTrackForegroundAndBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)conversationType;
- (void)app_didEnterBackground;
- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)didFetchFullDetailUser:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)appDidEnterBackgroundNotification:(id)a0;
- (void)appWillEnterForegroundNotification:(id)a0;
- (id)vcParent;
- (void)inputStateDidChange:(id)a0;
- (id)sendEnterConActionWithEnterConType_v2:(long long)a0;
- (id)getSendUserActionRequestParamsWithEnterType:(long long)a0 source:(long long)a1;
- (void)sendEnterConActionWithEnterConType:(long long)a0;
- (id)paramsForEnterConType:(long long)a0;
- (void)safeAddDict:(id)a0 toDict:(id)a1;
- (id /* block */)completionForEnterConType:(long long)a0;
- (void)sendEnterOrExitConActionWithModel:(id)a0 commonParamsForActionType:(id)a1 completionBlock:(id /* block */)a2;
- (id /* block */)sendUserActionCompletionBlock;
- (void)sendExitConActionWithType:(long long)a0;
- (id)paramsForExitConType:(long long)a0;
- (void)sendUserActionWithModel:(id)a0 commonParamsForActionType:(id)a1 requestBlock:(id /* block */)a2;
- (id)requestParamsWithModel:(id)a0 commonParamsForType:(id)a1 consumersThatWantToSend:(id)a2;
- (void)handleUserActionInfoWithBannerTypeH5:(id)a0;
- (void)exitConversationPage;
- (void).cxx_destruct;
- (void)addConsumer:(id)a0;

@end
