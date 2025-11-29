@class AWEIMActionSheetItemModel, NSString;

@interface AWEIMMessageListActionSeparateShareComponent : AWEIMComponentBase <AWEIMMessageListActionSeparateShareInterface>

@property (retain, nonatomic) AWEIMActionSheetItemModel *shareItemModel;
@property (retain, nonatomic) NSString *accessoryText;
@property (nonatomic) BOOL needCreateGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackShareMessageCompletionWithReferString:(id)a0 panelType:(long long)a1 isSuccess:(BOOL)a2 errorMsg:(id)a3 targetType:(long long)a4;
+ (void)shareWithMessage:(id)a0 shareModels:(id)a1 conversation:(id)a2 cachedSecurityCheckContext:(id)a3 accessoryText:(id)a4 completion:(id /* block */)a5;
+ (void)shareWithMessageArray:(id)a0 accessoryText:(id)a1 shareModels:(id)a2 conversation:(id)a3 cachedSecurityCheckContext:(id)a4;
+ (BOOL)shouldDegradeMessage:(id)a0;
+ (void)sendDegradeTextMsg:(id /* block */)a0 accessoryText:(id)a1 shareMessage:(id)a2 shareModels:(id)a3;
+ (void)sendMsg:(id /* block */)a0 accessoryText:(id)a1 withItemId:(id)a2 shareImpl:(id)a3 shareModels:(id)a4;

- (void)componentDidMounted:(id)a0;
- (void)addNotification;
- (void)handleCloseContactVCNotification:(id)a0;
- (void)openSendSharePanelWithResultCompletion:(id /* block */)a0;
- (void)onShareItemTapped;
- (void)reportShareWithCount:(long long)a0 shareModel:(id)a1;
- (void).cxx_destruct;
- (id)conversation;

@end
