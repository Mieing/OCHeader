@class NSString;

@interface AWEECOMIMQueueCountModel : NSObject

@property (nonatomic) long long queuedCount;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *contentString;
@property (copy, nonatomic) NSString *countTipString;
@property (nonatomic) long long thresHoldCount;
@property (nonatomic) long long state;

+ (id)queuedCountModelWithQeuedCount:(long long)a0 threshold:(long long)a1;

- (void).cxx_destruct;

@end
