@class NSString;

@interface AWEIMGroupChatSharePanelPluginImpl : NSObject <AWEIMGroupChatSharePanelPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)p_createTranspondListViewControllerWithShareContext:(id)a0 delegate:(id)a1 shieldInnerPush:(BOOL)a2;
- (id)createTranspondListViewControllerWithShareContext:(id)a0 panelController:(id)a1;
- (id)createSharePanelExtensionWithShareGroupModel:(id)a0;
- (id)transpondViewControllerExitMethod:(id)a0;
- (void)showQRCodeViewControllerWithConversation:(id)a0 dataSource:(id)a1 enterFrom:(id)a2;
- (id)shareTypeWithItemType:(unsigned long long)a0;

@end
