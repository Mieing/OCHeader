@class NSArray, IGListIndexSetResult;

@interface TIMXOConversationsDataSourceUpdate : NSObject

@property (retain, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSArray *nowData;
@property (retain, nonatomic) IGListIndexSetResult *cachedDiff;
@property (retain, nonatomic) NSArray *beforeUpdateConversationIdentifiers;
@property (retain, nonatomic) NSArray *afterUpdateConversationIdentifiers;
@property (retain, nonatomic) NSArray *deleteConversationIdentifiers;
@property (retain, nonatomic) NSArray *addConversationIdentifiers;
@property (copy, nonatomic) NSArray *fetchConversationsMonitorArray;

- (id)calcDiffs;
- (void).cxx_destruct;

@end
