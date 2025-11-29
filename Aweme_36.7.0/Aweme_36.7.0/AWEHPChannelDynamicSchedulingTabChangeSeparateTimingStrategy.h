@class AWEHPChannelDynamicSchedulingTimingStrategyModel, NSArray, NSString, AWEHPChannelDynamicSchedulingSeparateLeaveTimeLimitStrategy;

@interface AWEHPChannelDynamicSchedulingTabChangeSeparateTimingStrategy : NSObject <AWEHPChannelDynamicSchedulingTimingStrategyProtocol>

@property (retain, nonatomic) AWEHPChannelDynamicSchedulingTimingStrategyModel *model;
@property (retain, nonatomic) NSArray *limitStrategies;
@property (retain, nonatomic) AWEHPChannelDynamicSchedulingSeparateLeaveTimeLimitStrategy *separateLeaveTimeLimitStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryCheckReleaseChannelWithLoadChannelModels:(id)a0 withCurrentChannelId:(id)a1 withWhiteChannelList:(id)a2 withCompletion:(id /* block */)a3;
- (double)channelLeaveLimitTimeWithChannelID:(id)a0;
- (void)p_initLimitStrategy;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
