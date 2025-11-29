@class NSDictionary;

@interface AWEIMIncentiveChatRelationProgressCoolDownStatus : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long triggerTime;
@property (nonatomic) long long terminateTime;
@property (copy, nonatomic) NSDictionary *extra;

- (id)coolDownImageURLString;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
