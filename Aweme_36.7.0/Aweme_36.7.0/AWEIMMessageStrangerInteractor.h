@class NSString;
@protocol IESIMStrangerChatDataManagerProtocol;

@interface AWEIMMessageStrangerInteractor : AWEIMComponentBase <AWEUserMessage, IESIMStrangerChatDataManagerDelegate, AWEIMMessageListDataAction, AWEIMMessageStrangerInteractorInterface>

@property (nonatomic) BOOL didTransferedToFriend;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) id<IESIMStrangerChatDataManagerProtocol> dataController;
@property (nonatomic) BOOL isStrangerTransferToFriendInCurrentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)willDeleteMessage:(id)a0 sendToServer:(BOOL)a1;
- (void)fetchData:(id /* block */)a0;
- (id)vcParent;
- (void)deleteMessage:(id)a0 sendToServer:(BOOL)a1;
- (void)deleteMessage:(id)a0 sendToServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)iesim_strangerConversationDataSourceDidUpdate:(id)a0 updateConversationIdentifiers:(id)a1 reason:(long long)a2;
- (BOOL)isSelfConversationIdAmongIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
