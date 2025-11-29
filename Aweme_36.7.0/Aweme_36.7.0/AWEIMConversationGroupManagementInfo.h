@class NSString;
@protocol IESIMConversationProtocol, IESConversationGroupManagementProtocol, AWEIMConversationFansGroupWelcomeInfoProtocol;

@interface AWEIMConversationGroupManagementInfo : NSObject <AWEIMConversationGroupManagementInfoProtocol>

@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) id<AWEIMConversationFansGroupWelcomeInfoProtocol> welcomeInfoModel;
@property (nonatomic) BOOL allowSelfItemShareStatus;
@property (nonatomic) BOOL allowAdvUserJoinStatus;
@property (nonatomic) BOOL allowAskPraiseUserJoinStatus;
@property (nonatomic) BOOL allowLiveFansSubscriptionAutoRemove;
@property (nonatomic) BOOL allowLiveWindowTopSellerAutoSync;
@property (retain, nonatomic) id<IESConversationGroupManagementProtocol> groupManagementInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCon:(id)a0;
- (void)updateWithGroupManagementInfo:(id)a0;
- (void)getGroupManagementInfoWithCompletion:(id /* block */)a0;
- (void)fetchAllGroupManagementInfoWithCompletion:(id /* block */)a0;
- (void)fetchGroupManagementInfoWithTypesArray:(id)a0 completion:(id /* block */)a1;
- (id)groupManagementManger;
- (void)p_configGroupManagementInfoWithInfo:(id)a0;
- (void)__fetchGroupManagementInfoWithTypes:(id)a0 completion:(id /* block */)a1;
- (void)__configWithOtherGroupManagementInfo:(id)a0;
- (void).cxx_destruct;

@end
