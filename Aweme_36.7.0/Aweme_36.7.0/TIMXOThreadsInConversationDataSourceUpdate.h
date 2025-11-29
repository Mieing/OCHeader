@class NSArray, IGListIndexSetResult;

@interface TIMXOThreadsInConversationDataSourceUpdate : NSObject

@property (retain, nonatomic) NSArray *updatedThreadIdentifiers;
@property (retain, nonatomic) IGListIndexSetResult *cachedDiff;
@property (readonly, nonatomic) NSArray *beforeUpdateThreadIdentifers;
@property (readonly, nonatomic) NSArray *afterUpdateThreadIdentifiers;
@property (retain, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSArray *nowData;
@property (nonatomic) long long reason;

- (id)calcDiffs;
- (id)beforeUpdateMessageIdentifiers;
- (id)afterUpdateMessageIdentifiers;
- (void).cxx_destruct;

@end
