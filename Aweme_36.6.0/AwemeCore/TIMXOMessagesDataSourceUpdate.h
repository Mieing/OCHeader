@class TIMXOThreadsInConversationDataSourceUpdate, IGListIndexSetResult, NSArray;

@interface TIMXOMessagesDataSourceUpdate : NSObject

@property (retain, nonatomic) IGListIndexSetResult *cachedDiff;
@property (retain, nonatomic) TIMXOThreadsInConversationDataSourceUpdate *threadUpdate;
@property (readonly, nonatomic) NSArray *beforeUpdateMessageIdentifiers;
@property (readonly, nonatomic) NSArray *afterUpdateMessageIdentifiers;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSArray *nowData;

- (id)calcDiffs;
- (void).cxx_destruct;

@end
