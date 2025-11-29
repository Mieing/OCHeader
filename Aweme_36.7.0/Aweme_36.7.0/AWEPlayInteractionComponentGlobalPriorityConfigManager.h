@class NSArray;

@interface AWEPlayInteractionComponentGlobalPriorityConfigManager : NSObject

@property (nonatomic) long long scope;
@property (nonatomic) long long componentAvoidNumThreshold;
@property (copy, nonatomic) NSArray *supportTypeList;

+ (id)sharedManager;

- (BOOL)enableGlobalPriorityAvoidWithReferString:(id)a0;
- (BOOL)enableGlobalPriorityAvoidWithModel:(id)a0 referString:(id)a1;
- (void).cxx_destruct;

@end
