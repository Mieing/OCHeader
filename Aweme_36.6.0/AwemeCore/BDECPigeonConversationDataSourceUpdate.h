@class NSArray, IGListIndexSetResult, BDECPigeonConversationDataSourceTimeTracker;

@interface BDECPigeonConversationDataSourceUpdate : NSObject

@property (retain) IGListIndexSetResult *cachedDiff;
@property (retain, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSArray *nowData;
@property (retain, nonatomic) BDECPigeonConversationDataSourceTimeTracker *timeTracker;
@property (readonly, nonatomic) NSArray *beforeUpdateBizConversationIds;
@property (readonly, nonatomic) NSArray *afterUpdateBizConversationIds;

- (id)calcDiffs;
- (void).cxx_destruct;

@end
