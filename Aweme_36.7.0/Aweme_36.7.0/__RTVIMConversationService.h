@class NSString;
@protocol RxInjector;

@interface __RTVIMConversationService : NSObject <RTVIMConversationServiceInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isGroupConversationWithConversationID:(id)a0;
- (id)getSingleChatConversationIDFromUserID:(id)a0;
- (id)__awePanelContextWithContext:(id)a0;
- (id)makeCheckDictWithResult:(id)a0;
- (id)createGroupWithOtherParticipants:(id)a0 bizExtension:(id)a1;
- (void)transferToCreateGroupVCWithContext:(id)a0;
- (id)createGroupWithResultAndOtherParticipants:(id)a0 bizExtension:(id)a1;
- (void)transferToGroupChatWithResult:(id)a0 completion:(id /* block */)a1;
- (void)transferToReportPanelWithobjectID:(id)a0 ownerID:(id)a1 extraParam:(id)a2;
- (void).cxx_destruct;

@end
