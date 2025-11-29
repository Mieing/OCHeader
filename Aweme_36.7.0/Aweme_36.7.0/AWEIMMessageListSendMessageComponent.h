@class NSString;
@protocol AWEIMMessageListDataInterface, AWEIMMessageTrackInteractorInterface, AWEIMInputVIewControllerAction;

@interface AWEIMMessageListSendMessageComponent : AWEIMComponentBase <AWEIMComponentLazyCreate, AWEIMMessageListSendMessageInterface>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> dataService;
@property (weak, nonatomic) id<AWEIMMessageTrackInteractorInterface> tracker;
@property (weak, nonatomic) id<AWEIMInputVIewControllerAction> inputAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)resendMessage:(id)a0;
- (void)sendMessage:(id)a0 mentionUsers:(id)a1;
- (void)sendMessageWithContext:(id)a0;
- (void)sendNotSaveDBMessage:(id)a0;
- (void)checkAndSendMessageWithBlock:(id /* block */)a0;
- (void)handleClickUnblockNoti:(id)a0;
- (void)sendMessage:(id)a0 mentionUsers:(id)a1 customToast:(id)a2 enterFrom:(id)a3;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)conversation;

@end
