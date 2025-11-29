@class NSMutableArray;

@interface BDECPigeonBizConversationDataSourceTimeTracker : BDECPigeonConversationDataSourceTimeTracker

@property (retain, nonatomic) NSMutableArray *addNotifyTrackers;
@property (retain, nonatomic) NSMutableArray *updateNotifyTrackers;

- (id)notifyTrackers;
- (void).cxx_destruct;
- (id)init;

@end
