@interface BDECPigeonConversationDataSourceTimeTracker : NSObject

@property (nonatomic) long long notifyTime;
@property (nonatomic) long long asyncTime;
@property (nonatomic) long long runningTime;
@property (nonatomic) long long endTime;

- (id)notifyTrackers;

@end
