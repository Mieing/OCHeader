@class NSString, RTVInteractionMessageListViewController, RTVInteractionTracker;
@protocol RTVUserProfileManagerInterface, RTVSettingsManager, RTVInteractionContentController, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVInteractionSessionInterface;

@interface AWERTVInteractionSendMessageActionController : NSObject <RTVXRControllerInterface, RTVInteractionMessageListViewControllerDelegate, RTVInteractionSendMessageActionControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) RTVInteractionTracker *tracker;
@property (readonly, weak, nonatomic) id<RTVInteractionSessionInterface> session;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionContentController> contentViewController;
@property (readonly, nonatomic) RTVInteractionMessageListViewController *inputViewController;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (id)anotherUserID;
- (id)checkSendMsgWithFloatMode:(BOOL)a0 needRoute:(BOOL)a1;
- (void)postEnterMessageListNotiWithConvID:(id)a0 enterMethod:(id)a1;
- (void)routeToConversationOfType:(unsigned long long)a0 convID:(id)a1 anotherUserID:(id)a2 floatMode:(BOOL)a3 needRoute:(BOOL)a4;
- (void)interactionMessageListViewController:(id)a0 willSendMessage:(id)a1;
- (void)__routeToConversationOfType:(unsigned long long)a0 convID:(id)a1 anotherUserID:(id)a2 floatMode:(BOOL)a3 needRoute:(BOOL)a4;
- (id)__isCurrentUserInGroupConvWithID:(id)a0;
- (id)__createConversationWithUserIDs:(id)a0 type:(unsigned long long)a1;
- (void)__sendRouteToChatNotification;
- (id)__transferToMessageVCWithConvID:(id)a0 convType:(unsigned long long)a1 extension:(id)a2;
- (id)__transferToMessageVCWithUserID:(id)a0 showKeyboard:(BOOL)a1 ext:(id)a2;
- (void).cxx_destruct;
- (id)delegate;

@end
