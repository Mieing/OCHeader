@class NSArray, NSString;

@interface BDECIMCloudConversationsDataSourceUpdateImp : NSObject <BDECIMCloudConversationsDataSourceUpdate>

@property (retain, nonatomic) NSArray *deleteConversationIdentifiers;
@property (retain, nonatomic) NSArray *addConversationIdentifiers;
@property (retain, nonatomic) NSArray *currentConversationIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
