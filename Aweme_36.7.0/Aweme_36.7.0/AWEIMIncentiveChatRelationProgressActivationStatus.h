@class NSDictionary;

@interface AWEIMIncentiveChatRelationProgressActivationStatus : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long triggerTime;
@property (nonatomic) long long terminateTime;
@property (copy, nonatomic) NSDictionary *rawData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
