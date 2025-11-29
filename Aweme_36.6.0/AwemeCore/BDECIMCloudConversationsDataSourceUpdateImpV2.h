@class NSArray, TIMXOConversationsDataSourceUpdate, NSString;

@interface BDECIMCloudConversationsDataSourceUpdateImpV2 : NSObject <BDECIMCloudConversationsDataSourceUpdateV2>

@property (retain, nonatomic) TIMXOConversationsDataSourceUpdate *update;
@property (readonly, nonatomic) NSArray *beforeUpdateConversationIdentifiers;
@property (readonly, nonatomic) NSArray *afterUpdateConversationIdentifiers;
@property (readonly, nonatomic) NSArray *deleteConversationIdentifiers;
@property (readonly, nonatomic) NSArray *addConversationIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)calcDiffs;
- (void).cxx_destruct;
- (id)initWithUpdate:(id)a0;

@end
