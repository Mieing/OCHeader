@class NSString;

@interface AWEIMConversationFansGroupWelcomeInfo : NSObject <AWEIMConversationFansGroupWelcomeInfoProtocol>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) int welcomeUpdateValue;
@property (copy, nonatomic) NSString *welcomeMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)groupManagementManger;
- (id)__checkIndentityForErr:(id)a0;
- (void)configWithGroupManagementInfo:(id)a0;
- (void)setGroupManagementWelcomeInfoWithUpdateType:(int)a0 updateValue:(int)a1 welcomeMessages:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithConversationID:(id)a0;

@end
