@class NSString;

@interface MMFinderLiveGiftGoalItem : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *giftId;
@property (nonatomic) unsigned long long targetCount;
@property (nonatomic) unsigned long long currentCount;
@property (nonatomic) unsigned long long stagingUnixEpochTimeInSeconds;

- (void).cxx_destruct;

@end
