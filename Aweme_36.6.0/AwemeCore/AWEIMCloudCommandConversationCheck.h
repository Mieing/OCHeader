@class NSString;

@interface AWEIMCloudCommandConversationCheck : NSObject <AWECustomCommandHandler, IESIMLoginManagerMessage, IESIMChatDataManagerDelegate>

@property unsigned long long stage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)cloudCommandIdentifier;
+ (id)sharedInstance;

- (void)iesim_chatDataManager:(id)a0 pullDirection:(unsigned long long)a1 didEndPullOfflineMessagesWithHasMore:(BOOL)a2 userInfo:(id)a3;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)excuteCommandWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)canDealConversationCheck;
- (void)forceCheckConversationListIntegrityIfNeed;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
